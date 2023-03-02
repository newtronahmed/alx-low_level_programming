#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: string 1;
 * @s2: string 2;
 *
 * Return: integer;
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
			return (-1);
		else if (*(s2 + i) == '\0' && *(s1 + i) != '\0')
			return (1);
		else if (*(s1 + i) == (*s2 + i))
			continue;
	}
	/*if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		return 0;*/
	return 0;
}
/**
int main(void)
{
	char s1[6] = "hello";
	char s2[7] = "world!";
	int r;
	r = _strcmp(s1, s2);
	printf("%d \n", r);
	r = _strcmp(s1, s1);
	printf("%d \n", r);
	r = _strcmp(s2, s1);
	printf("%d \n", r);
	return 0;
}
*/
