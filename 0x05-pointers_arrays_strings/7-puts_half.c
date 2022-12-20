#include "main.h"

/**
 * puts_half - resets a pointer to 98
 *
 * @str: The value of the pointed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int start;
	int i;

	for (len = 0; str[len] != '\n'; len++)
	{
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
for (i = start; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
