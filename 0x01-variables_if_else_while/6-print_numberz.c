#include <stdio.h>
/**
 * main - Entry
 * Description: Print single number using put char
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
