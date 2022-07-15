#include "main.h"

/**
 * string_toupper - Functions that changes
 * all lower cases of a string to uper cases
 *
 * @str: The string to be changed.
 * Return: str.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if ((str[index] >= 'a') && (str[index] <= 'z'))
			str[index] -= 32;

		index++;
	}

	return (str);
}
