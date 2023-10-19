#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - everything
 *
 * @head: is
 *
 * Return: sucks
 *
 */

void free_list(list_t *head)
{
	list_t *temp_variable;
	/* assign temp_variable to head */
	temp_variable = head;

	/* check if head is NULL if yes the list is empty and we just return */
	while (head != NULL)
	{
		/* save the head in a temp variable */
		temp_variable = head;
		/* make the head point to the next node on list */
		head = head->next;
		/* free the str */
		free(temp_variable->str);
		/* free temp_variable and head just points to the rest of the list */
		free(temp_variable);
	}
	/* free the head */
	free(head);
}
