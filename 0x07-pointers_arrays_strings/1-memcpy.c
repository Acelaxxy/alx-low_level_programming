#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memories area.
 * @dest: Memory area.
 * @src: Source.
 * @n: Number of src.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; accept < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
