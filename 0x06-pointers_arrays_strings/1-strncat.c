#include "main.h"

/**
 * _strncat - The _strncat function is similar to the _strcat function,
 * except that:
 *it will use at most n bytes from src; and
 *src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: input parameter string.
 * @src: input parameter string.
 * @n: integer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;
	char *s;
	int i;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	s = src;
	for (i = 0; i < n; i++)
	{
		*p++ = *s++;
	}
	*p = '\0';
	return (dest);
}
