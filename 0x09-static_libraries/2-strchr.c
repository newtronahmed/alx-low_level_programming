#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to string.
 *
 * @c: character
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (p);
}
