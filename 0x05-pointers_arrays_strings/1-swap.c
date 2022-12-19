#include "main.h"

/**
 * swap_int - resets a pointer to 98
 *
 * @a: The value of the pointed
 * @b: Second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
		*a = *b;
		*b = temp;
}
