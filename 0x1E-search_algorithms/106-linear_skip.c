#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 * or NULL if value is not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
	return (NULL);

	express = list->express;
	current = list;

	while (express != NULL && express->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", express->index, express->n);
		current = express;
		express = express->express;
	}

	printf("Value found between indexes [%ld] and [%lu]\n",
			current->index, express ? express->index : current->index);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	while (current != NULL && current->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		current = current->next;
	}

	if (current == NULL || current->n != value)
		return (NULL);

	return (current);
}
