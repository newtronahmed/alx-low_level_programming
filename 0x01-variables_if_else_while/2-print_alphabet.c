#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 * Description: Prints alphabets
 * Return: Always 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}
	putchar('\n');
	return (0);

}
