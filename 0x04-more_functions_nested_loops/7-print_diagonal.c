#include "main.h"

/**
 * print_diagonal - prints a line
 *
 * @n: the number of times the line will primnt
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
