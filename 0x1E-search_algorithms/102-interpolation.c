#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array:pointer to the first element of the array to search in
 * @size:number of elements in array
 * @value:value to search for
 * Return: return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array [%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%ld] is out of range\n", high);
	return (-1);
}
