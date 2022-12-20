#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - resets a pointer to 98
 *
 * @dest: The value of the pointed
 * @src: value of the array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
