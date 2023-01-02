#include "main.h"

/**
 * _memcpy - fn copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: fn copies
 * @src: bytes from memory area
 * @dest: to memory area
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
