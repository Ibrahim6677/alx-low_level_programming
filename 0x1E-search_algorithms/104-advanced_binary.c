#include <stdio.h>
#include "search_algos.h"
/**
 *advanced_binary_recursive -searches for a value in a sorted array of integers
 * using advanced binary search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @start: starting index of the array
 * @end: ending index of the array
 * @value: value to search for
 *
 * Return: the index where value is located,
 * or -1 if value is not present or array is NULL
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (end >= start)
	{
	mid = start + (end - start) / 2;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, start, mid, value));
	}

		if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, end, value));

		return (advanced_binary_recursive(array, start, mid, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using advanced binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located,
 * or -1 if value is not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
