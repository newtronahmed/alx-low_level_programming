#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array -reates an array of chars
 * @size: size
 * @c: charcter
 *
 * Return : char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}

