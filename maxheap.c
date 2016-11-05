#include "maxheap.h"
#include <stdlib.h>
#include <string.h>

MaxHeap *create_empty_heap() {
    MaxHeap *H = malloc(sizeof(MaxHeap));
    
    if (!H) {
        return NULL;
    }
    
    H->heapsize = 0;
    return H;
}

MaxHeap *create_heap(int A[], int a_len) {
    MaxHeap *H = malloc(sizeof(MaxHeap));
    
    if (!H) {
        return NULL;
    }
    
    H->heap = malloc(sizeof(int) * a_len);
    
    if (!H->heap) {
        free(H);
        return NULL;
    }
    
    memcpy(H->heap, &A, sizeof(int) * a_len);
    
    H->heapsize = a_len;
    
    return H;
}

void heapify(MaxHeap *H);
int heap_max(MaxHeap *H);
int heap_del_max(MaxHeap *H);