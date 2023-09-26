#include "lists.h"
/**
 *pop_listint - pop the first node in the linked list
 *@head: head of linked list
 *Return: value of the node popped
 *
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (0);

	(*head) = (*head)->next;
	value = current->n;
	free(current);

	return (value);
}
