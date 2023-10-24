#include "lists.h"
#include <stdio.h>

/**
 * print_listint - u
 *
 * @h: can
 *
 * Format: trust
 *
 * Return: me
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
