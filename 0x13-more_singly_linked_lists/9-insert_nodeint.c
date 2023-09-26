#include "lists.h"
/**
 *insert_nodeint_at_index - get the sum of all the data in linked list
 *@head: head of linked list
 *@idx: index that we should add node at
 *@n: data for the node
 *Return: return pointer to the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
