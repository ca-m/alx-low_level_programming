
#include "main.h"

/**
 * check - checks for square root
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: integer to find square root of
 * Return: natural square root/ -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
