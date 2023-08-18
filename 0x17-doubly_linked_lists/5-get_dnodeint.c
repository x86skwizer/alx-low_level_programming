#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head of dlistint_t
 * @index: index of node in dlistint_t
 *
 * Return: nth node of a dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	if (!head)
		return (NULL);
	i = 0;
	while (head && i < index)
	{
		i++;
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}
