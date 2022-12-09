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
	int n;
	int b;

	for (n = '0'; n <= '9'; n++)
	{
		for (b ='0'; b <= '9'; b++)
		putchar(n);
		putchar(b);
		if (n != '9') & (b != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
return (0);
}
