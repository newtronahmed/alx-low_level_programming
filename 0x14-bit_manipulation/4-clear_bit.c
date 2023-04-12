#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer
 * @index: index of the bit.
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
		return (-1);

	temp = 1 << index;

	if (*n & temp)
		*n ^= temp;

	return (1);
}
