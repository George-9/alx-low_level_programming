#include "lists.h"

/**
 * listint_len - gets the length of a linked list
 * @h: the list(or the first element in the list)
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c;

	c = 0;
	while (1)
	{
		if (h == NULL)
			return (c);
		h = h->next;
		c++;
	}
	return (c);
}
