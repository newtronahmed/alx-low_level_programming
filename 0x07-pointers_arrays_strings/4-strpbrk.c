#include "main.h"

/**
 * _strpbrk() - a function that searches a string for
 * any of a set of bytes.
 *
 * @s: string.
 * @accept: set of bytes
 *
 * Return: pointer to charcter.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k = '\0';

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				if (k == '\0' || j < k)
					k = j;
				break;
			}
		}
	}
	return (s + k);
}
