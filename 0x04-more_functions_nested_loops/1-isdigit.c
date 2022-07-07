#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if an alphabet is upper or not
 * @c: The character to be checked
 *
 * Return: 1 if successful or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
