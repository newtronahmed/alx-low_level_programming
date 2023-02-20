#include <stdio.h>
/**
 * main - Entry
 * Description: Print number combinations
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar('0' + y);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
