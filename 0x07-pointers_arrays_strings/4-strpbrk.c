#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: string to search
 * @accept: set of bytes to be searched for
 *
 * Return: if set matched - pointer to matched byte
 * if no set matched - null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s)
		}

		s++;
	}
	return ('\0');
}
