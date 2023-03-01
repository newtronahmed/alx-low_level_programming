#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: pointer to array
 * @n: number of elments to print
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;
	
	putchar(a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	putchar('\n');
}
