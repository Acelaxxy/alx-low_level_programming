#include "main.h"

/**
 * print_number - This function prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchat('-');
		j = -j;
	}

	if ((j / 10) > 0)
		print_number(j / 10);

		_putchar((j % 10) + '0');
}
