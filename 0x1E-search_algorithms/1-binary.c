#include <stdio.h>
#include "search_algos.h"
/**
*binary_search - function that searches for a value in a sorted array
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: If value is not present in array or if array is NULL,return -1
*/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		int mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
