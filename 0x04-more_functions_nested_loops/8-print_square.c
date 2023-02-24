#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * Use the character # to print the square.
 *
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			putchar('#');
		putchar('\n');
	}
}
