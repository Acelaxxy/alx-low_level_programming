#include "main.h"

/**
 * puts2 - Prints every character of a string
 * @str: The char to be printed
 *
 * Description: This will print a string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int a;

for (a = 0; str[a] != '\0'; a++)
			if ((a % 2) == 0)
			_putchar(str[a]);
	_putchar('\n');
}
