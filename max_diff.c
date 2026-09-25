#include <stdlib.h> // For NULL

/**
 * Computes the difference between the largest and smallest values
 * in the array. Returns 0 if the array is NULL or empty.
 */
int max_diff(int* array, int alen) {

    if (array == NULL || alen <= 0) {
        return 0;
    }

    int min = array[0];
    int max = array[0];

    for (int i = 1; i < alen; i++) {

        if (array[i] < min) {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }

    return max - min;
}