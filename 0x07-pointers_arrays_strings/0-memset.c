#include "main.h"

/**
 * _memset - function fills the first n bytes of 
 * the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @n: size
 * @b: constant
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + 0) = b;
	}
	return s;
}
