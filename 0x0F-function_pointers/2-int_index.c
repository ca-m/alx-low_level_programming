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
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
