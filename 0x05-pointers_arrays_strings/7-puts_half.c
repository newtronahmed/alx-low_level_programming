#include "main.h"

/**
 * puts_half -  a function that prints half of a string.
 *
 * @str: string input.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count, start;

	count = 1;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (start = (count / 2); start < count; start++)
		{
			putchar(str[start]);
		}
	}
	else
	{
		for (start = (count + 1) / 2; start < count; start++)
		{
			putchar(str[start]);
		}
	}
	putchar('\n');
}
