#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: Head of a list.
 * @index: Index of a node.
 *
 * Return: nth node. If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; < index && head != NULL; a++)
	{
		head = head->next;
	}
	return (head);
}
