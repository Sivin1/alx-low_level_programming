#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draw a diagonal
 * @n: the parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (a == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
