#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything
 * @format: string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *tmp, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, (float)va_arg(args, double));
					break;
				case 's':
					tmp = va_arg(args, char*);
					if (tmp == NULL)
					{
						tmp = "(nil)";
						break;
					}
					printf("%s%s", sep, tmp);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
