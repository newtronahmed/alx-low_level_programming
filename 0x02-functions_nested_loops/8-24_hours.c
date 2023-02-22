#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
int jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10 && j < 10)
				printf("0%d:0%d", i, j);
			else if (i < 10)
				printf("0%d:%d", i, j);
			else if (j < 10)
				printf("%d:0%d", i, j);
			else 
				printf("%d:%d", i, j);
			printf("\n");
		}
	}
}

