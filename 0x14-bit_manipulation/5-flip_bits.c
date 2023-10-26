#include "main.h"

/**
 * flip_bits - my
 *
 * @n: first
 *
 * @m: love
 *
 * Return: broke
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
