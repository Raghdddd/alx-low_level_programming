#include "main.h"
#include <stdlib.h>
/**
 * create_array - too much
 *
 * @size: here we go
 *
 * @c: again
 *
 * Return: ZERO
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int r;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
		cr[r] = c;

	return (cr);
}
