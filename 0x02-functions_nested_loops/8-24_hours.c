#include "main.h"

/**
 * jack_bauer - prints alphabets
 * @n: number to cehck
 * Return: 0 if lower
 * -1 if otherwise
 */
void jack_bauer(void)
{
	int minute;
	int hour;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
