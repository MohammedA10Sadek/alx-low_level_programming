#include "main.h"

/**
 * _puts - a function that print a string to stdout
 *
 * Description: a function that prints a string using pointer method
 *
 * @str: string to print
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
