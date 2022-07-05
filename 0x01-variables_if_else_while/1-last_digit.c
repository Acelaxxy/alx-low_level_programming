#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assign a random number to variable n each time it is executed 
 * and print the last digit of the number stored in the variable
 *
 * Return: Always 0 (if successful)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf("and is greater than 5, \n");
	}
	if (x == 0)
	{
		printf("and is 0, \n");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 5 and not 0, \n");
	}
	return (0);
}
