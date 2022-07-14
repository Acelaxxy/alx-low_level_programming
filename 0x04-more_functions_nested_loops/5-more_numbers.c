#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14 followed by a new line
 *
 * Return: no return
 */

void more_numbers(void)
{
	int row, count, num;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
			}
		_putchar('\n');
	}
}
