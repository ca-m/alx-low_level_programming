#include "main.h"

/**
 * swap_int - swaps value of int a and b
 * @a: int 1
 * @b: int 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
