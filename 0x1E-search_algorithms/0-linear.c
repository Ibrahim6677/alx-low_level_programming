#include "search_algos.h"
#include <stdio.h>

/**
*linear_search - function that searches for a value
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: If value is not present in array or if array is NULL,return -1
*/

int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);
	}

	return (-1);
}
