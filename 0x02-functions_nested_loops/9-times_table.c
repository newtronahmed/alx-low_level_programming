#include "main.h"

/**
 * times_table:  a function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
				printf("%d", i*j);
			else if (i*(j + 1) >= 10)
				printf("%d, ", i*j);
			else
				printf("%d,  ", i*j);
		}
		printf("\n");
	}
}
