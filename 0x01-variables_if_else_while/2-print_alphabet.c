#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 * Description: Prints alphabets
 * Return: Always 0
 */
int main(void)
{
	int x;
	int small;

	for (x = 'A'; x <= 'Z'; x++)
	{
		small = tolower(x);
		putchar(small);
	}
	putchar('\n');
	return (0);

}
