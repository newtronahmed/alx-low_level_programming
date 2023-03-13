#include "main.h"
/**
 * main -  prints the number of arguments
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
