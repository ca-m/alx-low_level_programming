#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: number of which sign will be printed
 * Return: 1 if greater than zero, 0 if number is zero, -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}