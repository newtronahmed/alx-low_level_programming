#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * createArray -reates an array of chars
 * @size: size
 * @c: charcter
 *
 * Return : char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	a[0] = c;
	return (a);
}

