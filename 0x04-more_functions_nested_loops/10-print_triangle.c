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
int main(void)
{
	print_triangle(1);
	printf("%s \n", "End of 1");
	print_triangle(2);
	printf("%s\n", "End of 2");
	print_triangle(10);
	printf("%s\n", "End of 10");
	print_triangle(-4);
	return (0);
}
