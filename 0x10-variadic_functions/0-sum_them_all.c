#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum parameters
 * @n: integer
 * Return: 0 or integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int tmp, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, int);
		sum += tmp;
	}

	return (sum);
}
