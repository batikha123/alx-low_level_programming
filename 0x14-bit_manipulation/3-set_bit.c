#include "main.h"

/**
 * set_bit - change the value of bit at index to 1
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
