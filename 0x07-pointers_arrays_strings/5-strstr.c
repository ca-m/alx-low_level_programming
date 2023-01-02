#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: if substring is located - pointer @ substring start
 * if substring not located - null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haysack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
