#include "main.h"

/**
 * jack_bauer - Prints the last digit of a number
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour, minute;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
