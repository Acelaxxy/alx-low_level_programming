#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}
