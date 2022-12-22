#include "main.h"

/**
* string_toupper - change lowercase to uppercase
* @str: string to change
* Return: poiter to changed string
*/

char *string_toupper(char *str)
{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
