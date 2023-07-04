#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	node->n = n;
	if (!head)
	{
		node->next = NULL;
		return (node);
	}
	node->next = *head;
	*head = node;
	return (node);
}
