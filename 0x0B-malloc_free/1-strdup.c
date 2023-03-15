#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 *
 *
 * string given as a parameter.
 * @str: str parameter
 *
 * Return: pointer or ull
 */
char *_strdup(char *str)
{
	char *s;
	int size, i;

	size = strlen(str);
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = *str++;
	}
	s[i] = '\0';
	return (s);
}
