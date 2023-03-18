#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked -  allocates memory using malloc.
 *
 * @b: integer parameter
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
