#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: head of listint_t
 * @n: content
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *curr;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = node;
	return (node);
}
