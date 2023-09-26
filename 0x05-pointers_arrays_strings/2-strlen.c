#include "main.h"

/*
 * _strlen - function that return the length of the string
 * 
 * Description: a function that take a string and return the length of it
 * 
 * @s: the string
 * 
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
