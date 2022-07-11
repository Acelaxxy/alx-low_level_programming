#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long j, k, next;

	j = 0;

	k = 1;

	for (i = 1; i < 50; i++)
	{
		next = j + k;
		printf("%lu", next);

		j = k;
		k = next;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
