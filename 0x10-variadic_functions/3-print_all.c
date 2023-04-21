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
	char *tmp;
	va_list args;

	va_start(args, format);

	while (format == NULL)
		return;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				tmp = va_arg(args, char*);
				if (tmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", tmp);
				break;
			default :
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
