#include "main.h"

/**
 * get_endianness - say
 *
 * Return: theres
 *
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
