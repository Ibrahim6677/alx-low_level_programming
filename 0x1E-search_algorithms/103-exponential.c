#include <stdio.h>
#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int mid, low, high;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	while (low <= high)
	{
	printf("Searching in array: ");
	for (mid = low; mid <= high; mid++)
	{
		printf("%d", array[mid]);
		if (mid < high)
			printf(", ");
	}
	printf("\n");

	mid = (low + high) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}

	return (-1);
}
