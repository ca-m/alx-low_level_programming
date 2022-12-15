#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * Description: prints diagonals
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = i; spaces < size; spaces++)
			{
				_putchar(' ');
			}

			for (hashes = 1; hashes <= i; hashes++)
			{
				_putchar('#');
			}
			
			_putchar('\n');
		}
	}
}	
