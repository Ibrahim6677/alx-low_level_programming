#include <stdio.h>
#include "search_algos.h"

int advanced_binary_recursive(int *array, int low, int high, int value);

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, (int)size - 1, value);
}

int advanced_binary_recursive(int *array, int low, int high, int value) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    printf("Searching in array: ");
    for (int i = low; i <= high; i++) {
        if (i != low)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");

    if (array[mid] == value) {
        if (mid == low || array[mid - 1] != value)
            return mid;
        else
            return advanced_binary_recursive(array, low, mid, value);
    }
    else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, high, value);
    else
        return advanced_binary_recursive(array, low, mid - 1, value);
}
