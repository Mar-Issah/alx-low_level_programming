#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	for (idx = 0; idx < size; idx += step)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] >= value)
		{

			printf("Value found between indexes [%lu] and [%lu]\n", idx - step, idx);
			while ((idx - step) < size)
			{
				printf("Value checked array[%lu] = [%d]\n", idx - step, array[idx - step]);
				if (array[idx - step] == value)
					return (idx - step);
				idx++;
			}
		}
	}

	return (-1);
}
