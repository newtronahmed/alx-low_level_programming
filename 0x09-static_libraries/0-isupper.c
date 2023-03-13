#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: ASCII character
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

