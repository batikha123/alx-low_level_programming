#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator string
 * @n: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, char*);

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);

		if (separator == NULL || i == n - 1)
			continue;

		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
