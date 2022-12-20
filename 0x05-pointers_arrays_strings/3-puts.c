#include "main.h"

/**
 * _puts - resets a pointer to 98
 *
 * @str: The value of the pointed
 *
 * Return: void
 */

void _puts(char *str)

{
	char count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_puts(*str);
	}
		_puts('\n');
}
