#include "main.h"

/**
 * print_diagsums -  sum of the two diagonals of a square matrix of integers.
 *
 * @a: integer pointer
 * @size: size

 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + (i * size + i));
		diag2 += *(a + (i * size + (size - 1 - i)));
	}

	printf("%d, %d\n", diag1, diag2);
}
