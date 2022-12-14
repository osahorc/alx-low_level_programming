#include "main.h"

/**
 * times_table - prints alphabets
 *
 * Return: 0 if lower
 * -1 if otherwise
 */
void times_table(void)
{
	int row;
	int line;
	int answer;

	for (row = 0; row <= 9; row++)
	{
		for (line = 0; line <= 9; line++)
		{
			answer = row * line;

			_putchar('0' + answer);
			_putchar(',');
			_putchar(' ');
			
		}
		_putchar('\n');
	}
}
