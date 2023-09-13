#include "search_algos.h"

/**
 * linear_search - Searches for value in array
 *                 of integers using linear search
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present or array is NULL, -1
 *         Otherwise, first index where value is located
 * Description: Prints value every time it is compared in array
 */
					  
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
					return (i);
	}

	return (-1);
}
