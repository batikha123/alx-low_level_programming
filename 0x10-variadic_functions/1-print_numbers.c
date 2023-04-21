#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print arguments numbers
 * @separator: string (separator between argumets)
 * @n: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, tmp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, int);
		printf("%d", tmp);

		if (i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
}
