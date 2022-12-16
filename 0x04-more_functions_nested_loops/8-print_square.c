/**
 * print_square - prints squares
 *
 * @size: is the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b =0; b < size; b++)
		{
			_putchar('#')
		}
		_putchar('\n')
	}
	_putchar('\n')
}
