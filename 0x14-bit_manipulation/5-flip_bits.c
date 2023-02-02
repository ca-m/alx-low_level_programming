#include "main.h"

/**
 * flip_bits - counts numberof bits to be flipped to get from number to another
 * @n: number
 * @m: number to flip n to
 * Return: necessary number of bits to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
