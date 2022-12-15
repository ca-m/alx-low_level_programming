#include "main.h"
#include <stdio.h>

/**
 * main - enrty point
 * Description: prints #s 1-100 followed by new line
 * multiples of three print fizz instead
 * multipes of 5 print buzz instead
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
