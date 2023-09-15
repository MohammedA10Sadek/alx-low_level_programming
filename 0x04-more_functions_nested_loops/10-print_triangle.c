#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int hght, base;

		for (hght = 1; hght <= size; hght++)
		{
			for (base = hght; base < size; base++)
			{
				_putchar(' ');
			}

			for (base = 1; base <= hght; base++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

