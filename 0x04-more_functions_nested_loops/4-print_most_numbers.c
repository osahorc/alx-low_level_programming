#include "main.h"

/**
 * print_numbers - multipies figures
 * charter to cehck
 * second carachter to multiply
 * Return: void
 */
void print_numbers(void)

{
	int i;

	for (i = 1; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar(48 + i);
	}
	_putchar('\n');
}
