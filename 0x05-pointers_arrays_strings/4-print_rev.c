#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)

			_putchar(s[a]);
		_putchar('\n');
}
