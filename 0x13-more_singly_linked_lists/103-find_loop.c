#include "lists.h"
/**
 * find_listint_loop - Find a loop in a linked list
 * @head: A pointer to the head of the linked list
 * Return: A pointer to the node where the loop begins, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;

	if (head == NULL)
		return (NULL);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
