#include "lists.h"

/**
 * dlistint_len - returns number of element in
 * a doubly linked list.
 *
 * @h: head of list
 * Return: Number of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
