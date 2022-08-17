#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * linked list.
 * @head: head of a list.
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int beginn;
	listint_t *h;
	listint_t *live;

	if (*head == NULL)
		return (0);

	live = *head;

	beginn = live->n;

	h = live->next;

	free(live);

	*head = h;

	return (beginn);
}
