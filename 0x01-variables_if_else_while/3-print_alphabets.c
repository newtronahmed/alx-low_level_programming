#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 * Description: Print lowercase and uppercase letters
 * Return: Always 0
 */
int main(void)
{
	int x;
	char small;

	for (x = 'A'; x <= 'Z'; x++)
	{
		small = tolower(x);
		putchar(small);
	}
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
