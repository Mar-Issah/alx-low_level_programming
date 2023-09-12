#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array:pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is locate
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
