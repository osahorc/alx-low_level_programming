#include "main.h"

/**
 * _alpha - prints alphabets
 * @c: charter to cehck
 * Return: 0 if lower
 * -1 if otherwise
 */
int _alpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
