#include "lists.h"
#include <stddef.h>

/**
 * listint_len - eturns the number of elements in a linked listint_t
 * @h: head of listint_t
 *
 * Return: number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	if (!h)
		return (0);
	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
