#include "kheap.h"
#include "heap.h"
#include "../../kernel.h"
#include "../../config.h"
#include "../memory.h"

struct heap kernel_heap;
struct heap_table kernel_heap_table;

void kheap_init()
{
    int total_table_entries = GUBOS_HEAP_SIZE_BYTES / GUBOS_HEAP_BLOCK_SIZE;
    kernel_heap_table.entries = (HEAP_BLOCK_TABLE_ENTRY*)(GUBOS_HEAP_TABLE_ADDRESS);
    kernel_heap_table.total = total_table_entries;

    void* end = (void*)(GUBOS_HEAP_ADDRESS + GUBOS_HEAP_SIZE_BYTES);
    int res = heap_create(&kernel_heap, (void*)(GUBOS_HEAP_ADDRESS), end, &kernel_heap_table);
    if (res < 0)
    {
        print("\nFailed to create heap\n");
    }

}

void* kmalloc(size_t size)
{
    return heap_malloc(&kernel_heap, size);
}

void* kzalloc(size_t size)
{
    void* ptr = kmalloc(size);
    if (!ptr)
        return 0;

    memset(ptr, 0x00, size);
    return ptr;
}

void kfree(void* ptr)
{
    heap_free(&kernel_heap, ptr);
}