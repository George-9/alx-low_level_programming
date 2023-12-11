#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a list at a given index
 *
 * @head: pointer to the pointer of the first node
 * @idx: the position of new node in the list
 * @n: data of the new node
 *
 * Return: the address of the new node, otherwise NULL on error
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		return (new);
	}

	for (tmp = *head; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
