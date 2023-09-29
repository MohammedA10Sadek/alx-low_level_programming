#include "main.h"

/**
 * _strlem_recursion - a function that does strlen work
 * @s: the string
 * Return: l or 0
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (0);
	}
	l += 1;
	_strlen_recursion(s + 1);
	return (l);
}
