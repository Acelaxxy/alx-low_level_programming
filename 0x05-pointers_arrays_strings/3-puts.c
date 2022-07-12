#include "main.h"

/**
 * _puts - Returns the length of a string
 * @str: The string to get the length
 * Return: Always 0.
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
