#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Function that concatenates two strings
 * @dest: The is tring to concatenate with src
 * @src: String to concatenate with dest
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

			return (dest);
}
