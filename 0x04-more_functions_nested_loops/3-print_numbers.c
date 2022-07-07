#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar((c % 10) + '0');
		_putchar('\n');
	}
}
