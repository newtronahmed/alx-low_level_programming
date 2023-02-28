#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: integer pointer parameter.
 * @b: integer pointer parameter.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
