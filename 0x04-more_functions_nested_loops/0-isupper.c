#include "main.h"

/**
 * _isupper - checks if it is upper
 *
 * @c: is the character
 *
 * Return: returns 1 if upper
 * otherwise 0 is returned
 */

int _isupper(int c)
{
	if (c => 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
