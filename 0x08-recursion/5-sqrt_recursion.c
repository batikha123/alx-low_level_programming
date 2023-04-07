#include "main.h"
int _sqrt(int a, int b);
/**
 * _sqrt_recursion - calculate the square root of an integer
 * @n: the integer
 * Return: sqrt of n or - 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
/**
 * _sqrt - helper function
 * @a: integer
 * @b: integer
 * Return: sqrt of a or -1
 */
int _sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (_sqrt(a, b + 1));
}
