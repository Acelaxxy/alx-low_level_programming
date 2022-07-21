#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string prefix to be located.
 *
 * Return: bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
