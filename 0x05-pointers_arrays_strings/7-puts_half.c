#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The char to be printed
 *
 * Description: This will print half ofa string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int half, string = 0;

	while (str[string])
		string++;
	{
		if ((string + 1) % 2)
			half = (string - 1) / 2;
		else
			half = (string / 2);
		half++;
	}
	for (string = half; str[string]; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
