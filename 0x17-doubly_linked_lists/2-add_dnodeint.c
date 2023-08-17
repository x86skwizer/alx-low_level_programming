#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds new node at beginning of dlistint_t
 * @head: head of dlistint_t
 * @n: content of new node
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
