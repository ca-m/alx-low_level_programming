#include "main.h"

/**
 * get_bit - gets valueof bit at given index
 * @n: the bit
 * @index: index to get value at
 * Return: error occurs - -1, otherwise - value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
