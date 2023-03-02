#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @str: string.
 *
 * Return: pointer;
 */

char *cap_string(char *str)
{
	char *p;
	int seperators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;

	p = str;
	if (*p >= 'a' && *p <= 'z')
		*p = *p - 32;
	while (*p != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*p == seperators[i])
			{
				if (*(p + 1) >= 'a' && *(p + 1) <= 'z')
				{
					*(p + 1) = *(p + 1) - 32;
				}
				break;
			}
		}
		p++;
	}
	return (str);
}
