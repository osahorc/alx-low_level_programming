#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - this is the main function
 *
 * Description: -this is the dectiption.
 * it has two lines
 *
 * Return: Always return 0.
 */

int main(void)

{
	char n;

	char o;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	for (o = 'a'; o <= 'f'; o++)
	{
		putchar (o);
	}
	putchar('\n');
return (0);
}
