#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next;

	node = head;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
