#include "main.h"
/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 *
 *@n: input for integer
 *
 * Return: Always 0;
 */
void print_times_table(int n)
{
	int i, j, ixj;

	if (n < 15 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				ixj = i * j;
				if (ixj <= 9)
				{
					_putchar(' ');
					_putchar('0' + ixj);
				}
				else
				{
					_putchar('0' + (ixj / 10));
					_putchar('0' + (ixj % 10));
				}
			}
			_putchar('\n');
		}
	}
}
