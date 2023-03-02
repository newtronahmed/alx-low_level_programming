#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 *
 * @str: string
 *
 * Return: string.
 */
char *leet(char *str)
{
	int letters[] = {'a', 'e', 'o', 't', 'l'};
	int replacer[] = {'4', '3', '0', '7', '1'};
	char *p = str;
	int i;

	while (*p != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*p == letters[i] || *p == (letters[i] - 32))
			{
				*p = replacer[i];
				break;
			}
		}
		p++;
	}
	return (str);
}
