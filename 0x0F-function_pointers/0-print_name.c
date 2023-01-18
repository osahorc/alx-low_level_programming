#include "function_pointers.h"

/**
 * print_name - prints the name.
 * @name: the pointer to name.
 * @f: the pointer to f.
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
