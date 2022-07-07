#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if an alphabet is upper or not
 *@c: The character to be checked
 *
 * Return: 1 if successful or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
