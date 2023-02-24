#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: input integer
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
