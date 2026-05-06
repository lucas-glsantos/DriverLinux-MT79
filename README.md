# 🎯 **Driver MT7902 WiFi & Bluetooth Correção Automática para Linux**
Repositório responsável pelo desenvolvimento dos drivers para o Mediatek mt7902    
[OnlineLearningTutorials](https://github.com/OnlineLearningTutorials/mt7902_temp)

## ✅ Funcionamento verificado
Essa correção foi verificada e está funcionando corretamente na máquina:

* **Marca:** ACER
* **Modelo:** Aspire A315-23
* **Chipset:** MediaTek MT7902
* **Kernel Version:** 6.17+ (Linux)
* **OS:** Linux Mint 22.3 (Ou distros similares Debian-based)

## 🚀 Correção automática (Recomendado)
Se você deseja corrigir rapidamente seus problemas de imcompatibilidade de drivers Wi-Fi e Bluetooth em qualquer kernel moderno, siga estas etapas:

1. **Abra seu terminal** e clone o repositório:

   ```bash
   git clone --depth 1 https://github.com/lucas-glsantos/DriverLinux-MT79.git
   cd DriverLinux-MT79
   ```

2. **Torne o script executável:**

   ```bash
   chmod +x aumatic_fix.sh
   ```


3. **Execute o script com sudo:**

   ```bash
   sudo bash automatic_fix.sh
   ```

### 📖 O que este script faz:
* **Verifica dependências:** Garante que você tenha `gcc`, `make`, e seu atual `kernel-headers` instalado.
* **Compila Drivers:** Constrói ambos drivers automaticamente (WiFi e Bluetooth) para sua versão exata do kernel.
* **Correção persistente:** Instala um serviço no sistema garantindo que sua rede Wi-Fi permaneça ativa mesmo após reiniciar o computador.
* **Seguro:** Instala módulos em um diretório personalizado (`/lib/modules/mt7902_custom`) evitando alterações nos arquivos padrão do sistema.

> [!NOTE]
> Você precisará de uma conexão com a internet (via Ethernet ou USB tethering) na primeira execução, será feito o download das ferramentas de compilação necessárias.

## 🔧 Firmwares usados
Firmwares são armazenados na pasta `firmware`.   

## 📁 Clonando o repositório
Clone o repositório em sua máquina local

  ```bash
  git clone --depth 1 https://github.com/lucas-glsantos/DriverLinux-MT79.git
  ```

## 💻 WiFi ✅
> [!IMPORTANT]
> Uma opção secundária de repositório funcional com algumas limitações [Aqui](https://github.com/OnlineLearningTutorials/mt7902_temp)

Driver wifi para o mt7902, lançado recentemente pela mediatek está dentro da pasta `latest`. 

Se você estiver usando o Ubuntu, basta acessar a pasta `latest` e executar o seguinte comando no terminal.

```bash
make
```

Ele compilará todos os módulos, os compactará e os instalará (substituindo o módulo original do kernel pelo módulo modificado). Se você estiver usando outra distribuição ou não quiser todas as etapas e desejar apenas compilar o código, execute o comando no terminal.

```bash
make module_compile
```

Para compactar o módulo que você compilou, execute o seguinte comando no terminal:

```bash
make module_compress
```

Para instalar o módulo compactado no módulo do kernel no sistema, execute o seguinte comando no terminal:

```bash
make module_install
```

## 📱 Bluetooth ✅
> [!WARNING]
> Se houver conflito com o driver Bluetooth `gen4-mt7902` então, por favor, remova o firmware Bluetooth para que ele não interfira com este driver.
> ``` sudo rm /lib/firmware/mediatek/mt7902/BT_RAM_CODE_MT7902_1_1_hdr.bin.zst ```
> Este projeto utiliza o firmware
> ``` /lib/firmware/mediatek/BT_RAM_CODE_MT7902_1_1_hdr.bin.zst ```

Para ativar o Bluetooth, acesse o diretório da sua versão atual do kernel. Por exemplo, se você tiver o kernel linux-6.17, vá até o diretório `./linux-6.17/drivers/bluetooth` .
Abra o terminal neste diretório e compile com o comando. `make`.
Dois módulos do kernel são compilados `btusb.ko` e `btmtk.ko`.
Para ativar o Bluetooth em sua máquina, remova os arquivos btusb e btmtk do seu sistema e instale-os usando os comandos.

```bash
sudo rmmod btusb 
sudo rmmod btmtk

sudo insmod btmtk.ko
sudo insmod btusb.ko

```

Agora verifique se o seu WIFI e Bluetooth estão funcionando.
