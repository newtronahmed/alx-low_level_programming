#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle.
 *
 * @size: integer input
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (i >= j)
				putchar('#');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
