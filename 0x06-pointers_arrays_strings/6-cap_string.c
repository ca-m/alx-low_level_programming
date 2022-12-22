#include "main.h"

/**
 * cap_string - capitalises all words in a string
 * @s: string
 * Return: address of s
 */

char *cap_string(char *s)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[idex] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
				str[index] -= 32
		index++;
	}

	return (str);
}
