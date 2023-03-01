#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Destination
 * @src: source to the destination.
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (src[count] != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return dest;
}
