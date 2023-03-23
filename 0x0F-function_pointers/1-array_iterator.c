#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates array parameter and runs a func on them
 *
 * @array: array given
 * @size: size of array
 * @action: function to run on elements
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
