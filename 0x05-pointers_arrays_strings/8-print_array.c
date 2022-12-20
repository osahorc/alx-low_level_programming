#include "main.h"
#include <stdio.h>

/**
 * void print_array - resets a pointer to 98
 *
 * @*a: The value of the pointed
 * @n: value of the array
 *
 * Return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
		{
			printf(", ");
		}
	}
	printf("\n")
}
