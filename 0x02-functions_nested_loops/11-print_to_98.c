#include "main.h"
/**
 * print_to_98: a function that prints all natural numbers from n to 98, followed by a new line.
 * @n: integer parameter
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else 
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
