#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	int j, i;
	va_list args;
	const char types[] = {'c', 'i', 'f', 's'};

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		for (j = 0; j < 4; j++)
		{
			if (i && types[j] == format[i])
				printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (format[i] == '\0')
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
