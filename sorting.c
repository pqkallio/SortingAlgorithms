#include <stddef.h>
#include <stdlib.h>

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

