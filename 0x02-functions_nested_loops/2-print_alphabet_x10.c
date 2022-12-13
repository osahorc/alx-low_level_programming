#include <unistd.h>
/**
 * main - this is the main function
 *
 * Description: -this is the dectiption.
 * it has two lines
 *
 * Return: Always return 0.
 */

/* c is a character that will be printed to the screen */
int _putchar(char c);
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
char c;
int b;

	for (b = 1; b <= 10; b++)
	{
		for (c ='a'; c <='z'; c++)
			_putchar(c);
	}
	_putchar('\n');
	return;
}
