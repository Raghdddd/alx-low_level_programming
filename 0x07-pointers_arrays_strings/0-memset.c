#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int r;

	for (r = 0; r < n; r++)
		s[r] = b;
	return (s);
}
