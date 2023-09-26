#include "lists.h"
/**
 *sum_listint - get the sum of all the data in linked list
 *@head: head of linked list
 *Return: return the sum of the linked list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
