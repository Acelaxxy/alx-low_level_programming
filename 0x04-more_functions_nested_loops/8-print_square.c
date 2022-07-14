#include "main.h"
#include <stdio.h>

/**
 * print_square- Write a function that draws
 * a straight line in the terminal
 * @size: The size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
