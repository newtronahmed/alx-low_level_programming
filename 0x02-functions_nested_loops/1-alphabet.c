#include "main.h"

/**
 * print_alphabet -Print alphabets
 *
 * Return: void
 */
int print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
