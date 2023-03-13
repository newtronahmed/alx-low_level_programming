#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: input parameter.
 * @src: input parameter.
 *
 * Return: pointer string
 */
char *_strcat(char *dest, char *src)
{
	 char *p;
	 char *s;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	s = src;
	while (*s != '\0')
	{
		*p++ = *s++;
	}
	*p = '\0';
	return (dest);
}
