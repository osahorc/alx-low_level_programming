#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 except 2 and 4, and then prints a new line
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
		_putchar(48 + i);
		}
	}
	_putchar('\n');
}
