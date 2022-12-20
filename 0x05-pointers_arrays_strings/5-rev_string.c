#include "main.h"
#include <string.h>

/**
 * rev_string - resets a pointer to 98
 *
 * @s: The value of the pointed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int count;

	for (count = 0; count < len / 2; count--)
	{
		char temp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = temp;
	}
}
