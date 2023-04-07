#include "main.h"
int _prime(int a, int b);
/**
 * is_prime_number - says if prime
 * @n: integer
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime(n, n - 1));
}
/**
 * _prime - checks if prime
 * @a: integer
 * @b: integer
 * Return:
 */
int _prime(int a, int b)
{
	if (b == 1)
		return (1);
	else if (a % b == 0 && b > 0)
		return (0);
	else
		return (_prime(a, b - 1));
}
