#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: string.
 * @needle: substring.
 *
 * Return: pointer to char.
 */
char *_strstr(char *haystack, char *needle)
{
	char *fhaystack;

	while (*haystack != '\0')
	{
		fhaystack = haystack;
		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (fhaystack);
		haystack = fhaystack + 1;
	}
	return (0);
}
