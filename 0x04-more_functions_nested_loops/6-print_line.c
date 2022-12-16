#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: the number of times the line will primnt
 *
 * Return: void
 */

void print_line(int n)
{
	int a;
	for (a = 0; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
