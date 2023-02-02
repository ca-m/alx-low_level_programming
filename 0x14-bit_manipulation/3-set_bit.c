#include "main.h"

/**
 * set_bit - sets vaue of bit at given index to 1
 * @n: pointer to bit
 * @index: index to set value at
 * Return: if error occured - -1, otherwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
