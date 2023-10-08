#include <stdlib.h>
#include "main.h"

/**
 * *_memset - gates
 *
 * @s: will
 * @b: open
 * @n: tomorrow
 *
 * Return: right here
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

/**
 * *_calloc - wait a minute
 *
 * @nmemb: i think
 * @size: i lost
 *
 * Return: my mind
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
