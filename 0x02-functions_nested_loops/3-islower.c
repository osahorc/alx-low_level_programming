#include "main.h"

/**
 * islower - prints alphabets
 *
 *Return: 0 if lower
 -1 if otherwise
 */
int _islower(int)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
