#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n)
 * of a linked list.
 * @head: head of a list.
 *
 * Return: Sum of all the data. If the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
