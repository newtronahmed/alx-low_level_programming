#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t strlen_s1, strlen_s2;
	char *str;
	char *ret;
	unsigned int i, concat_size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strlen_s1 = strlen(s1);
	strlen_s2 = strlen(s2);
	if (n >= strlen_s2)
		concat_size = strlen_s2;
	else
		concat_size = n;

	str = malloc(strlen_s1 + concat_size + 1);
	if (str == NULL)
		return (NULL);
	ret = str;
	while (*s1 != '\0')
	{
		*str++ = *s1++;
	}
	for (i = 0; i < n && *s2 != '\0'; i++)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (ret);
}
