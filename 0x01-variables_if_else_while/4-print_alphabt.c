#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabt in lower case followed by a new line
 * minus e and q
 *
 * Return: Always 0 (if successful)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
