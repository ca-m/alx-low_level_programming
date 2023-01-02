#include "main.h"

/**
 * _memset - fills memory w/ constant byte
 * @n: bytes of memory area pointed to by @s
 * @s: w/ consonant byte @b
 * @b: memory area pointer
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
