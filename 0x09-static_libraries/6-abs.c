#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 *@i: Integer input
 *
 * Return: absolute value of the input integer
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
