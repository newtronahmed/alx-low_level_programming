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

	count = 0;
	while (str[count] != '\0')
	{
		count++
	}
	count--
	if (count % 2 == 0)
	{
		for (start = (count % 2) - 1; start < count; start++)
		{
			putchar(str[start]);
		}
	}
}
