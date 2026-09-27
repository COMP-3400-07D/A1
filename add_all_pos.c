#include <stdlib.h>

/**
 * Adds all positive numbers in the array.
 * Returns 0 if the array is NULL.
 */
int add_all_pos(int* array, int alen) {

    if (array == NULL) {
        return 0;
    }

    int total = 0;

    for (int i = 0; i < alen; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
    }

    return total;
}