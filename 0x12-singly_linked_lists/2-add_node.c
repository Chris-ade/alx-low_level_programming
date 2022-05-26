#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(const char *str)
{
int string = 0;

	while (str[string] != '\0')
	{
		string++;
	}
return (string);
}
/**
 * add_node - adds a new node at the beginning of a list.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		if (str == NULL)
		{
			newnode->str = 0;
			newnode->len = 0;
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		else
		{
			newnode->str = strdup(str);
			if (newnode->str == NULL)
			{
				free(newnode);
				return (NULL);
			}
			newnode->len = _strlen(str);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		return (NULL);
}
