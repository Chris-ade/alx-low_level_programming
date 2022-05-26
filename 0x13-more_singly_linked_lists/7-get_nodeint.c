#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: input.
 * @index: index to return.
 * Return: NUll
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temporal;

while (head)
{
temporal = head;
if (i == index)
return (temporal);
head = head->next;
i++;
}
return (NULL);
}
