#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: head of dlistint_t
 * @idx: index of node
 * @n: content of node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
