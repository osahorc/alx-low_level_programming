#include "main.h"
#include <string.h>

/**
 * puts2 - resets a pointer to 98
 *
 * @str: The value of the pointed
 *
 * Return: void
 */

void puts2(char *str)
{
	int count;
	
	for (count = 0; count != '\0'; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
