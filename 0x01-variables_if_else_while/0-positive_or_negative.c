#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number to variable
 *
 * Return: Always 0 (if successful)
 */

int main(void)
{
	int n;

	n = 0;

	if (n > 0)
		printf("%d is positive \n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	else
		printf("%d is zero \n", n);
	return (0);
}
