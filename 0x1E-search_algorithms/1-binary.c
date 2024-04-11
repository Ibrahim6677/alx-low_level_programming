#include <stdio.h>
#include "search_algos.h"

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
