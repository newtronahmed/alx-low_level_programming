#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator != NULL)
	{
		va_start (numbers, n);
		for (i = 0; i < n; i++)
		{
			if (i != 0)
				printf("%s%d", separator, va_arg (numbers, int));
			else
				printf("%d", va_arg(numbers, int));
		}
		va_end(numbers);
		printf("\n");
	}
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
