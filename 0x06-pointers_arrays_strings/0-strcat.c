#include "main.h"
#include <stdio.h>

/**
 * _strcat - concactenates two numbers
 *
 * @src: source
 * @dest: destination to copy
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	for ( i = 0; dest[i] != '\0'; i++);

	for (int j = 0; scr[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	Return (dest);
}
