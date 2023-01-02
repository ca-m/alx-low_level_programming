#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: character to print
 * Return: on success 1
 * on error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
