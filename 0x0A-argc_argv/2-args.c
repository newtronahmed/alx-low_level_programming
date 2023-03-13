#include "main.h"
/**
 * main - print all arguments including first
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	while(argc--)
	{
		printf("%s\n", argv[argc - 1]);
	}
	printf("\n");
	return (0);
}
