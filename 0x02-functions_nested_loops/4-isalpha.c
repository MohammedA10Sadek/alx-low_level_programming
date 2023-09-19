#include"main.h"

/**
 * _isalpha - checkif charachter is alpha
 * @c: is the charcter that we want to check its condition
 * Describtion:  program prints lowercase alphabet
 *
 * Return: void
*/

int _isalpha(int c);

	int i;

	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);


