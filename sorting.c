#include <stddef.h>
#include <stdlib.h>
#include "maxheap.h"

void insertion_sort(int array[], int length) {
    if (array == NULL || length < 2) {
        return (EXIT_SUCCESS);
    }
    
    int i;
    for (i = 1; i < length; i++) {
        int x = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = x;
    }
}

void bubble_sort(int array[], int length) {
    int n = length;
    int i, temp, newn;
    
    while (1) {
        newn = 0;
        for (i = 1; i < n; i++) {
            if (array[i - 1] > array[i]) {
                temp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = temp;
                newn = i;
            }
        }
        
        if (!newn) {
            break;
        }
        
        n = newn;
    }
}

