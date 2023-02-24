#include "main.h"

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			putchar('#');
		putchar('\n');
	}
}
int main(void)
{
	print_square(2);
	print_square(1);
	print_square(10);
	print_square(-4);
	return (0);
}
