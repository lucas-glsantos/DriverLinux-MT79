#!/bin/bash
# 🎯 MT7902 WiFi & Bluetooth Correção Automática para Linux
# =================================================
# Este script automatiza o processo de correção do driver MediaTek MT7902
# problemas nos modernos Kernels Linux (6.17+).
#
# 📖 Guia do Usuário:
# 1. Abra seu terminal no diretorio onde este script está alocado
#
# 2. Torne o script executável:
#    chmod +x automatic_fix.sh
#
# 3. Execute o script com sudo:
#    sudo bash automatic_fix.sh
#
# ❓ O que este script faz:
# - Instala dependências de compilação (gcc, make, kernel headers).
# - Compila os drivers de Wi-Fi e Bluetooth para o seu kernel específico.
# - Instala os drivers em um diretório seguro no sistema (/lib/modules/mt7902_custom).
# - Configura um serviço systemd para garantir que o Wi-Fi funcione após cada reinicialização.
#
# ⚠️  Pré-Requisitos:
# - Conexão com internet ativa (via Ethernet ou USB tethering)
#   Na primeira vez que você executar este comando, ele fará o download dos cabeçalhos do kernel.
# =================================================

set -e

# Declaração de Variáveis
SCRIPT_DIR=$(pwd)
KERNEL_VER=$(uname -r)
IS_CACHYOS=false
IS_ARCH=false
BT_DIR="$SCRIPT_DIR/linux-$KERNEL_VER/kernel/drivers/bluetooth"

if [[ "$KERNEL_VER" == *"cachyos"* ]]; then
     IS_CACHYOS=true
fi

if [[ "$KERNEL_VER" == *"arch"* ]]; then
     IS_ARCH=true
fi

# Verificação de uso: Certifique-se de que o script seja executado com sudo
if [[ $EUID -ne 0 ]]; then
     echo "❌ Este script deve ser executado como root (sudo)"
     echo "Uso: sudo bash automatic_fix.sh"
     exit 1
fi

echo "🚀 Iniciando Correção automatica MT7902..."

# 1. Pré-requisitos de instalação
# Para Ubuntu/Debian
if [ -f /etc/debian_version ]; then
    echo "📦 Verificando pré-requisitos..."
    apt-get update
    apt-get install -y build-essential linux-headers-$KERNEL_VER bc
fi

# Para CachyOS e Arch
if $IS_ARCH || $IS_CACHYOS; then
  sudo pacman -S --noconfirm clang llvm lld linux-headers base-devel
fi

# 2. Compilar módulos WIFI
echo "🛠️  Compilando módulos WIFI..."
cd "$SCRIPT_DIR/latest"
make clean || echo "Nenhum alvo limpo para WIFI, continuando..."
if $IS_CACHYOS; then
    make CC=clang LD=ld.lld module_compile
else
    make module_compile
fi

# 3. Compilar módulos Bluetooth
echo "🛠️  Compilando módulos Bluetooth..."
if [ -d "$BT_DIR" ]; then
    cd "$BT_DIR"
    make clean || echo "Nenhum alvo limpo para BT, continuando..."
    if $IS_CACHYOS; then
        make CC=clang LD=ld.lld
    else
        make
    fi
else
    echo "⚠️  Fonte Bluetooth não encontrada para esta versão do kernel, compilação BT ignorada."
fi

# 4. Preparar e copiar módulos
echo "📂 Instalando módulos..."
MODULE_DIR="/lib/modules/mt7902_custom"
mkdir -p "$MODULE_DIR"
cd "$SCRIPT_DIR/latest"
cp *.ko "$MODULE_DIR/"
cp mt7921/*.ko "$MODULE_DIR/"

if [ -d "$BT_DIR" ]; then
    cd "$BT_DIR"
    cp btmtk.ko btusb.ko /lib/modules/mt7902_custom/
fi

# 5. Criar/Atualizar Script de Configuração
echo "📝 Configurando serviço de inicialização..."
cat <<EOF | tee /usr/local/bin/mt7902-setup.sh
#!/bin/bash
# Descarregar módulos conflitantes
rmmod btusb btmtk mt7921e mt7921_common mt792x_lib mt76_connac_lib mt76 2>/dev/null || true

# Carregar pilha WIFI
modprobe cfg80211
modprobe mac80211

# Carregar módulos custom MT7902 (WIFI)
insmod /lib/modules/mt7902_custom/mt76.ko
insmod /lib/modules/mt7902_custom/mt76-connac-lib.ko
insmod /lib/modules/mt7902_custom/mt792x-lib.ko
insmod /lib/modules/mt7902_custom/mt7921-common.ko
insmod /lib/modules/mt7902_custom/mt7921e.ko

# Carregar pilha Bluetooth se módulos existir
if [ -f /lib/modules/mt7902_custom/btmtk.ko ]; then
    modprobe bluetooth
    modprobe btrtl
    modprobe btintel
    modprobe btbcm

    insmod /lib/modules/mt7902_custom/btmtk.ko
    insmod /lib/modules/mt7902_custom/btusb.ko

    systemctl restart bluetooth || true
fi
EOF

chmod +x /usr/local/bin/mt7902-setup.sh

# 6. Criar serviço systemd
cat <<EOF | tee /etc/systemd/system/mt7902.service
[Unit]
Description=Carregar drivers custom MT7902 Bluetooth e WIFI
After=network.target

[Service]
Type=oneshot
ExecStart=/usr/local/bin/mt7902-setup.sh
RemainAfterExit=yes

[Install]
WantedBy=multi-user.target
EOF

systemctl daemon-reload
systemctl enable mt7902.service
systemctl restart mt7902.service

echo "✅ MT7902 agora está Ativo! Seu WIFI e Bluetooth devem funcionar agora."
