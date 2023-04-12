#include "main.h"
/**
 * get_endianness - check for endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int y;
	char *c;

	y = 1;
	c = (char *) &y;

	return ((int)*c);
}
