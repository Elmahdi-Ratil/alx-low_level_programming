#include "lists.h"
/**
 *reverse_listint - reverse a linked list
 *@head: head of linked list
 *Return: address to the head of linked list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL || head == NULL)
		return (NULL);

	next = *head;
	next = next->next;
	while (next != NULL)
	{
		if (prev == NULL)
		{
			prev = (*head);
			prev->next = NULL;
		}
		else
			prev = (*head);

		(*head) = next;
		next = next->next;
		(*head)->next = prev;
	}

	return (*head);
}
