/* 
 * File:   main.c
 * Author: Petri Kallio
 *
 * Created on October 28, 2016, 9:08 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "maxheap.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int array[] = {4, 6, 2, 4, 7, -3, 90, 67, 23, 3, 5, 62};
    int length = 12;
    
    MaxHeap *H = create_heap(array, length);
    
    int i;
    for (i = 0; i < length; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    bubble_sort(array, length);
    
    for (i = 0; i < length; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
}

