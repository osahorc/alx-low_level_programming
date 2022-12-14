#include "main.h"

/**
 * print_last_digit - prints alphabets
 * @n: number to cehck
 * Return: 0 if lower
 * -1 if otherwise
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;
			_putchar('0' + last);
	return (last);
}
