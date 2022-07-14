#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - Prints number from 1 to 100, followed by a new line.
 * For multiples of 3 print Fizz
 * For multiples of 5 print Buzz
 * For multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");

		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");

		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");

		else
			printf("%d", num);

		if (num != 100)
			printf(" ");

		else
			printf("\n");
	}
	return (0);
}
