#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of listint_t
 * @head: the first node
 *
 * Return: he sum of all the data of the nodes
 */
int sum_listint(listint_t *head)
{
	int total;

	if (head == NULL)
		return (0);

	total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
