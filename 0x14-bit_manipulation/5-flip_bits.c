#include "main.h"

/**
 * flip_bits - returns number of bits needed for flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr;

	for (nbr = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbr++;
	}

	return (nbr);
}
