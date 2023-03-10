#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		_putchar('0' + -last_digit);
		return (-last_digit);
	}
	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
