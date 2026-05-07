obj-m += btusb.o

obj-m += btmtk.o

.PHONY: all clean module_compile module_compress module_install

all: module_compile module_compress module_install

MOD_DIR = /lib/modules/$(shell uname -r)/kernel/drivers/bluetooth
ZSTD_BINS = btusb.ko.zst btmtk.ko.zst

module_compile: 
	@echo "-- Compilação de Módulos"
	$(MAKE) -C /lib/modules/`uname -r`/build/ M=`pwd` modules
	
	
module_compress: $(ZSTD_BINS)
	@echo "-- Compressão de Módulos"
	

%.ko.zst: %.ko
	zstd $<


module_install: $(MOD_DIR)
	@echo "-- Copiando $(ZSTD_BINS) para $(MOD_DIR) (requer sudo)"
	# Use 'install' command for better handling of permissions/ownership
	sudo install -v -m 644 $(ZSTD_BINS) $(MOD_DIR)


clean: 
	$(MAKE) -C /lib/modules/`uname -r`/build/ M=`pwd` clean
	rm -f $(ZSTD_BINS)
