#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all combinations of two two digit numbers
 * followed by a new line
 *
 * Return: Always 0 (if successful) and 1 (otherwise)
 */

int main(void)
{
	int j, i;

	for (j = 0; j < 100; j++)
	{
		for (i = 0; i < 100; i++)
		{
			if (j < i)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (j != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
