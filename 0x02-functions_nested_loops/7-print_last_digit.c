#include "main.h"

/**
 * print_last_digit - prints alphabets
 * @n: number to cehck
 * Return: 0 if lower
 * -1 if otherwise
 */
int print_last_digit(int n)
{
	if (n > 0)
		n = n * -1
			_putchar('0' + (n % 10));
	return (n % 10);
}
