#include "lists.h"
/**
 *add_nodeint_end - add a node to the end of the list
 *@head: head of linked list
 *@n: data
 *Return: address to the new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
