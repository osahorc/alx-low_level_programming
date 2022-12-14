#include "main.h"

/**
 * islower - prints alphabets
 * @c: charter to cehck
 * Return: 0 if lower 
 * -1 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
