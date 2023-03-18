#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers.
 *
 * @argc - number of arguments
 * @argv - argument
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
