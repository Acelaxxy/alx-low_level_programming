#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: The string to be printed
 *
 * Description: This will reverse a string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; b >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
