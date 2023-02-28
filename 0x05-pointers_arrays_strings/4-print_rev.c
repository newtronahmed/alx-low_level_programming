#include "main.h"

/**
 * print_rev -a function that prints a string, in reverse, 
 * followed by a new line.
 * @s: input parameter.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		continue;
	}
	for (i = i; i < 0; i--)
		putchar(*(s + i));
	putchar('\n');
}
