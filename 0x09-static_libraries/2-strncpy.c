#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * Your function should work exactly like strncpy.
 *
 * @dest: destination input parameter.
 * @src: source input parameter.
 * @n: size (integer).
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *s;
	char *p;

	p = dest;
	s = src;
	for (i = 0; i < n && *(s + i) != '\0'; i++)
	{
		*(p + i) = *(s + i);
	}
	for ( ; i < n; i++)
		*(p + i) = '\0';
	return (dest);
}
