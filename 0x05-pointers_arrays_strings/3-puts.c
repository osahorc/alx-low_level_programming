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
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
		_putchar('\n');
}
