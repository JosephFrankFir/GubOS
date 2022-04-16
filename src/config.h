#ifndef CONFIG_H
#define CONFIG_H

#define KERNEL_CODE_SELECTOR 0x08
#define KERNEL_DATA_SELECTOR 0x10


#define GUBOS_TOTAL_INTERRUPTS 512
// 100MB heap size
#define GUBOS_HEAP_SIZE_BYTES 104857600
#define GUBOS_HEAP_BLOCK_SIZE 4096
#define GUBOS_HEAP_ADDRESS 0x01000000 
#define GUBOS_HEAP_TABLE_ADDRESS 0x00007E00
#define GUBOS_SECTOR_SIZE 512
#define GUBOS_MAX_PATH 108

#endif