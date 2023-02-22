#include "main.h"
/**
 * _isalpha - checks if input is alphabetic
 *
 * @c - Input character
 *
 * Return: 1 or 0 depending on input
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
