#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string
 *
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum, binary, two_power_i;
	int len;

	if (b == NULL)
		return (0);

	while (*b == '0')
	{
		b++;
	}
	i = 0;
	sum = 0;
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	if (len == 0)
		return (0);
	len--;
	while (b[len] != '\0')
	{
		binary = 0;
		if (b[len] == '1')
			binary = 1;
		else
			binary = 0;
		two_power_i = 1 << i;
		sum += two_power_i * binary;
		len--;
		i++;
	}
	return (sum);
}
