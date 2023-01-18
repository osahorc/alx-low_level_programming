#include "function_pointers.h"

/**
 * array_iterator - prints the name.
 * @array: the pointer to name.
 * @size: size of it
 * @action: the pointer to f.
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (int i = 0; i < size; i++)
	{
		(*action)(*array[i])
	}
}
