#include "main.h"

/**
 * print_sign - Checks the sign of a number.
 * @n: The number to check.
 *
 * Description: This function checks the sign of a given number.
 *
 * Return: 0 if n is equal to zero, 1 if n is positive, -1 if n is negative.
*/

int print_sign(int n)
{
	if (n == 0)
		return (0);
	else if (n > 0)
		return (1);
	else
		return (-1);
}
