#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	curr = head;
	while (curr != NULL)
	{
		head = head->next;
		free(curr);
		curr = head;
	}
}
