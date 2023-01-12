#include "main.h"

/**
 * malloc_checked - causes process termination w/ stat value 98
 * @b: allocated memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
