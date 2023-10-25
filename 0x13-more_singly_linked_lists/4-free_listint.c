#include "lists.h"

/**
 * free_listint - i dont
 *
 * @head: deserve this
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
