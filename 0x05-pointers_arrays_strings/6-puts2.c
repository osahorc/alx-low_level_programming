#include "main.h"
#include <string.h>

/**
 * puts2 - resets a pointer to 98
 *
 * @s: The value of the pointed
 *
 * Return: void
 */

void puts2(char *str)
{
	
	int count;

	for (count = 0; count != '\0'; count += 2)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
