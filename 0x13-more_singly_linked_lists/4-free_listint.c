#include "lists.h"
/**
 *free_listint - free list
 *@head: head of linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head != NULL)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
