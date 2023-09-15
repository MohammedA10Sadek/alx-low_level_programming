#include "main.h"

/**
 * _isupper - is a function checks for the upper case characters
 *
 * @c: input for alphabet
 *
 * Return: 1 if uppercase otherwise Always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 60 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
