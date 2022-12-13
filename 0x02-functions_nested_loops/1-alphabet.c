
/**
 * main - this is the main function
 *
 * Description: -this is the dectiption.
 * it has two lines
 *
 * Return: Always return 0.
 */

/* c is a character that will be printed to the screen */
int _putchar(char c);
void print_alphabet(void)
{
	char n;
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);

	}
	_putchar('\n');
	return;
}
