#include"main.h"

/**
 * _islower  - check if charecter is lowercase
 *
 * @c:  program checks lowercase alphabet
 *
 * Return: returns 1 if 'c' is lowercase otherwise Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
