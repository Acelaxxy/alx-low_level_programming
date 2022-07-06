#include "main.h"
/**
 * _islower - check if alphabet is lowercase or not
 * @c - The character to be checked
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
