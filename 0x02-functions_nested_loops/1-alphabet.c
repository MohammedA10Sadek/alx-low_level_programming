#include "main.h"

/**
 * print_alphabet  - check the code
 *
 * Describtion:  program prints lowercase alphabet
 *
 * Return: void
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
