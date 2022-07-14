#include "main.h"

/**
 * print_number - This function prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int j = n;

	/* first check if it is negative*/
	if (n	< 0)
	{
		_putchar('-');
		j = -j;
	}
	/* print first few digits*/
	if ((j / 10) > 0)
		print_number(j / 10);
	/*prints last digit*/

		_putchar((j % 10) + '0');
}
