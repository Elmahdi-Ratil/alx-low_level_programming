#include "lists.h"

/**
 *add_node_end - adds an element to the start of the linked list
 *@head: head of the linked list
 *@str: string
 *Return: pointer to the new node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current = *head;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		newnode->next = NULL;
		current->next = newnode;
	}
	return (newnode);
}
