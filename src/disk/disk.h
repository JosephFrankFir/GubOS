#ifndef DISK_H
#define DISK_H

#include "./fs/file.h"

typedef unsigned int GUBOS_DISK_TYPE;
#define GUBOS_DISK_TYPE_REAL 0

struct disk
{
    GUBOS_DISK_TYPE type;
    int sector_size;
    struct filesystem* filesystem;
};

int disk_read_sector(int lba, int total, void* buf);
void disk_search_and_init();
struct disk* disk_get(int index);
int disk_read_block(struct disk* idisk, unsigned int lba, int total, void* buf);

#endif