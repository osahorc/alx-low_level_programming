#include "main.h"

/**
 * print_numbers - prints 0 to 9 without 2 and 4
 *
 * Return: void
 */

void print_numbers(void)

{
	int i;

	for (i = 1; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
