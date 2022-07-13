#include "main.h"

/**
 * *_strcpy - Copies the string of a pointed src
 * @dest: The integer to be printed
 * @src: The number of array elements
 * Description: This will copy the pointed src of a string
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
