#include "main.h"

/**
 * print_sign - prints alphabets
 * @n: number to cehck
 * Return: 0 if lower
 * -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
}
