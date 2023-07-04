#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t
 * @h: head of listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	if (!h)
		return (0);
	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
