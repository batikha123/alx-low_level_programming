#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Print the last digit of a number
 * @n: The number passed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int i;

	i = abs(n % 10);
	_putchar((i) + '0');

	return (i);

}
