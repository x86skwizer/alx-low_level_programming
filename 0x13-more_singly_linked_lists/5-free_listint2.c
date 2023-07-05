#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	if (head)
	{
		curr = *head;
		while (curr)
		{
			next = curr->next;
			free(curr);
			curr = next;
		}
		*head = NULL;
	}
}
