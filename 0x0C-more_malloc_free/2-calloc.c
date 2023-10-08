#include <stdlib.h>
#include "main.h"

/**
 * *_memset - oppaaya
 *
 * @s: digaa chinga
 * @b: chowaha saram
 * @n: deerrtt
 *
 * Return: gttr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}
