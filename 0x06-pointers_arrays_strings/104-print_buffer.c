#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of a buffer to print
 * @l: line of buffer to print
 * Return: void
 */

void print_line(chr *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[1 * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[1 * 10 + k] > 31 && c[1 * 10 + k] < 127)
			putchr (c[1 * 10 + k]);
		else
			putchar('.');
	}
}
