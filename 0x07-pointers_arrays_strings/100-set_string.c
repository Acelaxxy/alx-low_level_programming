#include "main.h"
#include <stdio.h>

/**
 * set_string - Function that sets the value of a pointer to a character.
 * @s: The character.
 * @to: The pointer.
 *
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
