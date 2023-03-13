#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: string.
 *
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, i, j, bytes;

	count = 0;
	bytes = 0;
	i = 0;

	while (*(accept + i) != '\0')
	{
		printf("%c", *accept);
		for (j = 0; *(s +  j) != '\0'; j++)
		{
			printf("%c", *s);
			printf("%d is i \n", i);
			if (*(accept + i) == *(s + j))
			{
				if (j >= bytes)
					bytes = j + 1;
				count++;
				break;
			}
		}
		i++;
	}
	printf("Count minus 1 is %d and i is %d", (count - 1), i);
	if ((count - 1) == i)
		return (bytes);
	else
		return (0);
}
int main(void)
{
	char s[] = "hello,";
	char f[] = "leho";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
