#include "main.h"

/**
 * print_sign - Print the sign on an input
 *
 * @n: Integer input
 *
 * Return: 1 or 0 or -1 depending on input
 */
int print_sign(int n)
{
	if (n > 1)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar(-1);
		return (-1);
	}
}
