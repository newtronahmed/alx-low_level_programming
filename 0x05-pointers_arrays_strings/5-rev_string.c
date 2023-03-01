#include "main.h"

/**
 * rev_string - reverses a string input.
 *
 *@s: input string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count, i;
	char temp;
	
	count = 0;
	while ( count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	printf("%d count \n", count);
	count--;
	for (i = 0; i <= count/2; i++)
	{
		temp = s[i];
		s[i] = s[count - i];
		s[count - i] = temp;
	}
}
int main(void)
{
	char s[6] = "Ahmed";
	rev_string(s);
	printf("%s\n", s);
	return 0;
}
 
