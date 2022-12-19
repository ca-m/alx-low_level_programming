#include "main.h"

/**
 * _strcopy - copy string pointed t by src to dest
 * @dest: character to check
 * @srx: char to check
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[] = '\0';
	return (dest);
}
