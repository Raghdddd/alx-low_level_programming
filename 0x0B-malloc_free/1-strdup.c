#include "main.h"
#include <stdlib.h>
/**
 * create_array - look who
 *
 * @size: we
 *
 * @c: are
 *
 * Return: you & i
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int t;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		cr[t] = c;

	return (cr);
}
