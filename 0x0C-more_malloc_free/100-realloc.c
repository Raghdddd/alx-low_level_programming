#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - if you 
 *
 * @ptr: leave me
 * @old_size: i could di
 * @new_size: i swear
 *
 * Return: youre like the oxygen
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int t;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (t = 0; t < new_size; t++)
			ptr1[t] = old_ptr[t];
	}

	if (new_size > old_size)
	{
		for (t = 0; t < old_size; t++)
			ptr1[t] = old_ptr[t];
	}

	free(ptr);
	return (ptr1);
}
