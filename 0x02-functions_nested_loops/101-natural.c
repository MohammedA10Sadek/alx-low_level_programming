#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: a function that add all multiples of 3 and 5 togather
 *
 * Return: void*/

int main(void)
{
	int i, n, k;

	n = 1024;

	k = 0;

	i = 0;

	while (i < n)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			k = k + i;
		else
			continue;
		i++
	}
	printf("%d\n",k)
}
