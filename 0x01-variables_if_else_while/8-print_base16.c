#include <stdio.h>
/**
 * main - Entry
 * Description: Print single number
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		printf("%x", x);
	}
	printf("\n");
	return (0);
}
