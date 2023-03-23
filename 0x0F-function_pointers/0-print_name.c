#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 *
 * @name: name to print
 * @f: pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
