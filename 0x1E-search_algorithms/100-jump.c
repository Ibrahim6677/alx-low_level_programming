#include <stdio.h>
#include "search_algos.h"
/**
* jump_search -function that searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return -1
*/
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	/* Define jump step using square root of array size*/
	size_t step = (size_t)sqrt(size);
	size_t prev = 0;

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	/* Jump through the array*/
	while (array[step] < value && step < size)
	{
		prev = step;
		step += sqrt(size);
		if (step < size)
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
	}

	printf("Value found between indexes [%ld] and [%lu]\n", prev, step);

	/* Linear search within the jump range*/
	for (size_t i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
