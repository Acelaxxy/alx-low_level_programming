#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the numbers in base 10 followed by a new line
 *
 * Return: Always 0 (if successful)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
