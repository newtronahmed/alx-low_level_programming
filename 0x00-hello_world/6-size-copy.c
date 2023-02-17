#include <stdio.h>

/**
 * main - Entry point
 * Description: Print sizeof types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of a int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
