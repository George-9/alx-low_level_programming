#include "lists.h"

/**
 * print_listint - prints data of elements of a singly linked list
 * @h: the list
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	c = 0;
	while (1)
	{
		if (h == NULL)
			return (c);
		printf("%d ", h->n);
		printf("%s", "\n");
		h = h->next;
		c++;
	}
	return (c);
}
