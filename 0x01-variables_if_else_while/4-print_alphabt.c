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

	for (n = 'a'; n <= 'z'; n++)
	{
		if ((n != 'q') && (n != 'e'))
	{
		putchar (n);
	}
	}
	putchar('\n');
return (0);
}
