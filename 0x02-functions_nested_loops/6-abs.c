#include "main.h"

/**
 * _abs - a function that return the abslute value of a number.
 * @n: a variable that we want to git its abslute
 *
 * Describtion: a function that takes a number and return its abslute value
 *
 * Return: the abslute value of the number n
*/

int _abs(int n)
{
	if (n == 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
