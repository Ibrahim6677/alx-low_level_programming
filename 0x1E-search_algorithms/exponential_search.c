#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, int low, int high, int value);

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0)
        return -1;

    int bound = 1;
    while (bound < size && array[bound] < value) {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    int low = bound / 2;
    int high = (bound < (int)size) ? bound : (int)size - 1;

    printf("Value found between indexes [%d] and [%d]\n", low, high);

    return binary_search(array, low, high, value);
}

int binary_search(int *array, int low, int high, int value) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (int i = low; i <= high; i++) {
            if (i != low)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
