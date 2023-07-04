#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: head of listint_t
 * @n: content
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
