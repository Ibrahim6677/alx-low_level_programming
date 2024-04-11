#include <stdio.h>
#include <math.h>
#include "search_algos.h"

listint_t *jump_list(listint_t *list, size_t size, int value) {
    if (list == NULL)
        return NULL;

    size_t jump = sqrt(size);
    listint_t *current = list, *prev = NULL;

    while (current != NULL && current->n < value) {
        prev = current;
        for (size_t i = 0; current->next != NULL && i < jump; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
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
