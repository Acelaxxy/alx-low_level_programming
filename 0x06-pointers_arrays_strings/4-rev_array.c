#include "main.h"

/**
 * reverse_array - Functions that reverses
 * the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements of the array.
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
