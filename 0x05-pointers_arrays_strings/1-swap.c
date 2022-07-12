#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The integer to swap with b
 * @b: The integer to swap with a
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
