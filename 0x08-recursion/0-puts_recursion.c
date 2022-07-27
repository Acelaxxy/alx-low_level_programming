#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string
 * followed by a mew line.
 * @s: The string to print.
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
