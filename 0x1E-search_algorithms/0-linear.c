#!/bin/bash
#include "search_algos.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) // If array is NULL, return -1
        return -1;

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]); // Print the value being checked
        if (array[i] == value) // If value is found, return the index
            return i;
    }

    return -1; // If value is not found, return -1
}
