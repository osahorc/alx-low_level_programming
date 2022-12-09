#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* main - this is the main function
 *
 * Description: - This is the dectiption.
 *
 * Return: Always return 0.
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive",n);
else if (n < 0)
	printf("%d is negative", n);
else
	printf("%d, is zero", n)
return (0);
}
