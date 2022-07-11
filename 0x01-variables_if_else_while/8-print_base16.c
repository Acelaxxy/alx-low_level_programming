#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the numbers in base 16 followed by a new line
 *
 * Return: Always 0 (if successful) and 1 (otherwise)
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
