#include <stdarg.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list num_args;

	if (n == 0)
		return (0);
	va_start(num_args, n);
	
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg (num_args, int);
	}
	va_end (num_args);
	return (sum);
}
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
