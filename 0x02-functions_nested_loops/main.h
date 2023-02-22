#include <stdio.h>
#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * print_alphabet - Print alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
/**
 * print_alphabet_x10 - print alphats 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			putchar(j);
		}
	}
	putchar('\n');
}
#endif /* _MAIN_H_ */
