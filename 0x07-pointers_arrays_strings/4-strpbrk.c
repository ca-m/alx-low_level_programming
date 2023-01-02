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
	int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s)
			}

			s++;
		}
	return (NULL);
}
