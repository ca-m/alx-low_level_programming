#include "main.h"

/**
 * *_strcpy - copy string pointed t by src to dest
 * @dest: character to check
 * @src: char to check
 * Description: copy string to dest
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
