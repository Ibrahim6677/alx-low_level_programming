#include <stdio.h>
#include <math.h>
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value) {
    if (list == NULL)
        return NULL;

    skiplist_t *current = list, *prev = NULL;

    while (current != NULL && current->n < value) {
        prev = current;
        if (current->express == NULL)
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        else {
            printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
            current = current->express;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
    while (prev != NULL && prev->n < value) {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        prev = prev->next;
    }

    if (prev == NULL || prev->n > value)
        return NULL;

    return prev;
}
