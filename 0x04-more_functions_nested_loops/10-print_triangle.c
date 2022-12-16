#include "main.h"

/**
 * print_triangle - prints triangles
 *
 * @size: the size of the traingle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	
	if (size <= )
		_putchar('\n');
	for ( i = 0; i <= size; i++)
	{
		for (j = 0; j = size -i; j++)
		{
			_putchar(' ');
		}
		for ( j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
