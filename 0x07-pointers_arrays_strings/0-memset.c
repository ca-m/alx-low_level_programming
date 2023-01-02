#include "main.h"

/**
 * _memset - function fill first @n bytes of memory area pointed
 * to by @s w/ consonant byte @b
 *
 * @n: bytes of memory area pointed to by @s
 * @s: w/ consonant byte @b
 * @b: memory area pointer
 *
 * Return: pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
