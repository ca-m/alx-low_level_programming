#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * initializes w/ specific char
 * @size: size of array to be initialized
 * @c: specific char to initialize array w/
 * Return: if size == 0/function fails - NULL
 * otherwise - pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
