#include <stdio.h>
#include <ctype.h>
/**
 * main- Entry
 * Description: Print alphabets except q and e
 * Return: Always 0
 */
int main(void)
{
	int x;
	int small;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != 'Q' && x != 'E')
		{
			small = tolower(x);
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
