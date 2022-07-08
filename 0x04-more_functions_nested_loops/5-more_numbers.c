#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14 followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int x;

	for (c = 1; c <= 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar((x % 10) + '0');
		}
	}
	_putchar('\n');
}
