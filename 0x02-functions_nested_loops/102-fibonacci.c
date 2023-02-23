#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int n1, n2, cur;

	n1 = 1;
	n2 = 2;

	printf("%ld, \n", n1);
	printf("%ld, \n", n2);
	for (i = 3; i <= 50; i++)
	{
		cur = n1 + n2;
		printf("%ld, \n", cur);
		n1 = n2;
		n2 = cur;
	}
	return (0);

}
