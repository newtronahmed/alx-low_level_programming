#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: input string.
 *
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		if((*p >= 'a' && *p <= 'z'))
		{
			*p = (*p - 'a') + 'A';
		}
		p++;
	}
	return (s);
}
