#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, idx, middle;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array:");
		for (idx = low; idx <= high; idx++)
		{
			printf(" %d", array[idx]);
			printf("%c", (idx == high) ? '\n' : ',');
		}

		middle = (low + high) / 2;

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
