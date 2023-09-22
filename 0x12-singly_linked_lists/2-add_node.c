#include "lists.h"

/**
 *add_node - adds an element to the start of the linked list
 *@head: head of the linked list
 *@str: string
 *Return: pointer to the new node
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

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
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
