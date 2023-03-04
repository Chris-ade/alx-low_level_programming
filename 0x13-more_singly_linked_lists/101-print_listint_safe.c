#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to head of linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* if cycle found, exit program with status 98 */
        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            exit(98);
        }

        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
    }

    if (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
    }

    return (count);
}
