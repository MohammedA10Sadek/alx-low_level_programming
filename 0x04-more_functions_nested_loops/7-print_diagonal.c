#inclulde "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: no of times the char should be printed
 * use only _putchar
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postne; space++)
				_putchar(' ');
			_putchar('92');
			_putchar('\n');
		}
	}
}