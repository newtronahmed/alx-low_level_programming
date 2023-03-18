#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int size;
	int *m, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	m = malloc(size * sizeof(int));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		m[i] = min++;
	}
	return (m);
}
