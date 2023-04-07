#include "main.h"
/**
 * factorial - calculate the factorial of an integer
 * @n: the integer
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
