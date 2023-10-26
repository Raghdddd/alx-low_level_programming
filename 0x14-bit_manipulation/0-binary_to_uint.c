#include "main.h"

/**
 * binary_to_uint - i
 *
 * @b: know
 *
 * Return: you know
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, k = 0;

	if (b == NULL)
		return (0);

	while (b[k + 1])
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		k++;
	}

	while (k >= 0)
	{
		res += ((b[k] - '0') * base);
		base *= 2;
		k--;
	}


	return (res);
}
