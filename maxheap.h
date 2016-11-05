/* 
 * File:   heap.h
 * Author: Petri Kallio
 *
 * Created on October 29, 2016, 9:26 PM
 */

#ifndef MAXHEAP_H
#define	MAXHEAP_H

struct maxheap_t {
    int *heap;
    int heapsize;
} typedef MaxHeap;

MaxHeap *create_empty_heap();
MaxHeap *create_heap(int A[], int a_len);
void heapify(MaxHeap *H);
int heap_max(MaxHeap *H);
int heap_del_max(MaxHeap *H);

#endif	/* MAXHEAP_H */

