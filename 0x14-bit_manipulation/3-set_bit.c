#include "main.h"

/**
 * set_bit - but
 *
 * @n: not
 *
 * @index: like
 *
 * Return: how
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
