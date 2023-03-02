#include "main.h"

/**
 * reverse_array - Reverse an array
 *
 * @a: array.
 * @n: size.
 *
 * Return: void..
 */

void reverse_array(int *a, int n)
{
	int i, cur;

	for  (i = 0; i < n / 2; i++)
	{
		cur = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = cur;
	}
}
