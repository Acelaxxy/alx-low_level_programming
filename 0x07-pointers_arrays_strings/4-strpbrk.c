#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any set of byte.
 * @s: The string to be searched.
 * @accept: The byte to search for.
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s ==	accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
