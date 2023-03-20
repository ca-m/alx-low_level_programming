#include "main.h"

/**
 * _strspn - gets ength of prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: number of bytes in s, consists bytes from ccept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
