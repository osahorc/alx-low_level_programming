#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10


/**
 * main - resets a pointer to 98
 *
 *
 * Return: 0
 */

int main()

{
	srand(time(0));
	char password[PASSWORD_LENGTH + 1];
	int i;

	for (i = 0; i < password; i++)
	{
	password[i] = 'a' + (rand() % 26);
	}
	password[PASSWORD_LENGTH] = '\0';
print ("Password: %d\n", password);
}
