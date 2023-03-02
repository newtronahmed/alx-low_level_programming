#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: string 1;
 * @s2: string 2;
 *
 * Return: integer;
 */
int _strcmp(char *s1, char *s2)
{
	int i, op;

	i = op = 0;
	while (op == 0)
	{
		if (*(s1 + i) == '\n' && *(s2 + i) == '\0')
		{
			break;
		}
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
