#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 * or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t jump, i;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev = NULL;

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; current->next != NULL && i < jump; i++)
			current = current->next;

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	if (current == NULL)
		return (NULL);

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, current->index);

	for (i = prev->index; i <= current->index && prev->n <= value; i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
