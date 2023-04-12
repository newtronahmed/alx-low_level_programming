#include "main.h"
/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
		return (-1);

	temp = 1 << index;
	*n = (*n | temp);

	return (1);
}
