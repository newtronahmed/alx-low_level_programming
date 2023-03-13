#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  a program that adds positive numbers
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, total, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
