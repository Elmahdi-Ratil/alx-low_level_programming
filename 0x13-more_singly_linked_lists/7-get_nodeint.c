#include "lists.h"
/**
 *get_nodeint_at_index - get the node at the index
 *@head: head of linked list
 *@index: index of the wanted node
 *Return: return the node with the index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i;
	listint_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (index > count - 1)
		return (NULL);
	current = head;
	for (i = 0; i < index; i++)
		current = current->next;

	return (current);
}
