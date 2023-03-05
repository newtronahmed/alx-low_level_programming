#include "main.h"
/**
 * _memcpy - copies n bytes from memory area 
 *
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
