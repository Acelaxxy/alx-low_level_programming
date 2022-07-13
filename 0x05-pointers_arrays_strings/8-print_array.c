#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints 'n' elements of an array
 * @a: The pointer of the array
 * @n: The number of array elements
 * Description: This will print the elements of an array.
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n = 0; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
