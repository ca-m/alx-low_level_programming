#include <stdio.h>

/**
 * main - prints alphabet in lowercase and reverse
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
