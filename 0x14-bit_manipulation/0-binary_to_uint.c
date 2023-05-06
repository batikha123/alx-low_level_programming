#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len = 0, base_two;

	if (!b)
		return (sum);

	while (b[len])
		len++;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			sum += base_two;
	}

	return (sum);
}
