#include "main.h"

/***/

int _strlen_recursion(char *s)
{
	int l = 0

	if (*s == '\0')
	{
		return;
	}
	l += 1;
	_strlen_recursion(s + 1);
	return (l);
}
