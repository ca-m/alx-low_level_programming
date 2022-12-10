#include <stdio.h>
#include <unistd.h>
/**
 * main - prints in ascending order separated by a comma and followed by a space, all possible combinations of two different digits
 * Return: 0
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '0'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
