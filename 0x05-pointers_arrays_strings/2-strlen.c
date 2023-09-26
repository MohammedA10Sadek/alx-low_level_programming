#include "main.h"

/*
 * _strlen - the function that return the length of the string
 * @s: the string
 * Return: len
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
