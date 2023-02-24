#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms.
 * Return: Always 0.
 */

int main(void)
{
	long int n1, n2, cur, sum;

	n1 = 1;
	n2 = 2;
	sum = 2;
	while (1)
	{
		cur = n1 + n2;
		if (cur < 4000000)
		{
			if (cur % 2 == 0)
			{
				sum += cur;
			}
			n1 = n2;
			n2 = cur;
		}
		else
		{
			break;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
