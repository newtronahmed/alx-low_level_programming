#include "main.h"
#include <stdlib.h>
/**
 * main - print addition of two arguments
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 + num2);
	return (0);
}
