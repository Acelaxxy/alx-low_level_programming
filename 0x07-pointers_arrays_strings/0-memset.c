#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to put constant.
 * @b: Constant.
 * @n: Number of byte.
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		s[i] = b;
	}
	return (s);
}
