#include <stdio.h>
/**
 * main - Entry
 * Description: Print number combinations
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
