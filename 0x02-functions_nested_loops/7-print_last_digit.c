#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer
 *
 * Return: value of the last digit
 */
int print_last_digt(int i)
{
	int last_digit;

	last_digit = (i % 10);
	return (last_digit);
}
