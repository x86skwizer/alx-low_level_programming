#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t
 * @head: head of dlistint_t
 *
 * Return: sum of all data (n) of a dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int n;

	if (!head)
		return (0);
	n = 0;
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
