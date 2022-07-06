#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets times 10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
