#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: a program that prints alphapet in lowercase and upercase.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	return (0);
}
