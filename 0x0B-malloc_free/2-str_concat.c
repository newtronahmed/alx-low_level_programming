#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - eturned pointer should point to a newly
 * allocated space in memory
 *
 * @s1: string 1
 * @s2: sring 2
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, count = 0;
	char *s;
	int size = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		count++;
		size++;
	}
	count = 0;
	while (s2[count] != '\0')
	{
		count++;
		size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size && *s1 != '\0'; i++)
	{
		s[i] = *s1++;
	}
	for (j = i; j < size && *s2 != '\0'; j++)
		s[j] = *s2++;
	s[j] = '\0';
	return (s);
}
