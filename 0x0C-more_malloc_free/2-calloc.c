#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: number of members
 * @size: size byes
 *
 * Return: pointer;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		((char *)m)[i] = 0;
	return (m);
}
