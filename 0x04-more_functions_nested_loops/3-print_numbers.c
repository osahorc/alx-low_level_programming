#include "main.h"

/**
 * print_numbers - multipies figures
 * charter to cehck
 * second carachter to multiply
 * Return: result of multiplication
 */
void print_numbers(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
