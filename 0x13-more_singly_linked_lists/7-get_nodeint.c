#include "lists.h"

/**
 * get_nodeint_at_index - gets a node from a list at given index
 *
 * @head: first node
 * @index: position of the target node
 *
 * Return: the node at index, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	for (; ; i++)
	{
		if (head == NULL)
			return (NULL);

		if (i == index)
			return (head);
		head = head->next;
	}
}
