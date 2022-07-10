#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabets in lower case followed by a new line
 *
 * Return: Always 0 (if successful)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
