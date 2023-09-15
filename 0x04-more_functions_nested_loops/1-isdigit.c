#include "main.h"

/**
 * _isdigit - is a function checks for the digit characters
 *
 * @c: input for alphabet
 *
 * Return: 1 if uppercase otherwise Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
