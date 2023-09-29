#include "main.h"

/**
 * _puts_recursion - main function
 * @s: the string we want to print
 *
 * Describtion: a function that prints a string using recursion algorithm
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	int i = *s

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar("%c", i);
	_puts_recursion(s + 1);
}
