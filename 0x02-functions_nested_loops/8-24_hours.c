#include <stdio.h>

/**
 * jack_bauer - a function tthat print severy minute of jack's day.
 *
 * Return: void
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%.2d:%.2d\n", hour, minute);
		}
	}
}
