#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: a program that prints alphapitic characters in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchat(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
