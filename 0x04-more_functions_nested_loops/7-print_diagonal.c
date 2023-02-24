#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *
 * @n: integer input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
