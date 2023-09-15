#include "main.h"

/**
 * print_line - print _ lines
 * use only _purchar
 * @n the times should _be printed
 *
 * Return: void
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
