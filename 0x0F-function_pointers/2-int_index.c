#include "function_pointers.h"

/**
 * int_index - searches for integer in array
 * @array: array of integers
 * @size: array size
 * @cmp: pointer of function
 * Return: no match or size <=0 - -1
 * otherwise - index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index])
			return (index);
	}

	return (-1);
}
