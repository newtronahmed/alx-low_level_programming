#include "main.h"
/**
 * _islower- check if is lower
 *
 * @c: ASCII code for character
 * Return: 1 or 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');

}
