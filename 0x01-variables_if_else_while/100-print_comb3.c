#include <stdio.h>
/**
 * main - Entry
 * Description: Print combinatins of numbers
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if ((x != 8) || (y != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
