#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: operator
 *
 * Return: pointer to a function
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == osp[i].op)
		{
			if (ops[i].f == NULL)
				return (NULL);
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
