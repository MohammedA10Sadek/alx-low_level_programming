#include "main.h"

/**
 * _print_rev_recursion - the main function
 * @s: the string that will be printed in reverse
 *
 * Describtion: a function that take string and print it reversely
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
