#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list.
 * @h: list.
 * Return: The elements linked.
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
