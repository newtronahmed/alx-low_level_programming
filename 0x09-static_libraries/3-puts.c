#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @s: input parameter.
 *
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\n'; i++)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
