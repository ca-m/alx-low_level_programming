#include "main.h"

/**
 * _strlen - return length of string
 * @s: char to check
 * Description: will return length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
