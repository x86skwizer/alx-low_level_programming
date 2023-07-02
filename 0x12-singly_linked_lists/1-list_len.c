#include "lists.h"

/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 *
 * Return: the number of elements in list_t
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
