#include "main.h"
#include <stdio.h>

/**
 * print_line - Write a function that draws
 * a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (line = 0; line <= n; ++line)
			_putchar('_');
		_putchar('\n');
	}
}
