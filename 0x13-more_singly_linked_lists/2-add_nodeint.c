#include "lists.h"
/**
 *add_nodeint - add a node to the first of the list
 *@head: head linked list
 *@n: data
 *Return: address to the new node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
