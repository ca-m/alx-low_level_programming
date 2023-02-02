#include "main.h"

/**
 * flip_bits - counts numberof bits to be flipped to get from number to another
 * @n: number
 * @m: number to flip n to
 * Return: necessary number of bits to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
