#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlistint_t
 * @h: head of dlistint_t
 *
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
