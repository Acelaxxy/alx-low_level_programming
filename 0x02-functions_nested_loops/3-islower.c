#include "main.h"
/**
 * _islower - check if alphabet is lowercase or not
 * @c: The character to be checked
 *
 * Description: int _islower(int c)
 * Return: 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
