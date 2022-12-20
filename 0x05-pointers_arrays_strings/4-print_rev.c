#include "main.h"
#include <string.h>

/**
 * print_rev - resets a pointer to 98
 *
 * @s: The value of the pointed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int count;

	for (count = len - 1; s[count] >= 0; count--)
	{
		_putchar(s[count]);
	}
		_putchar('\n');
}
