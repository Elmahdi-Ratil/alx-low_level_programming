#include "lists.h"
/**
 * free_listint_safe - free a linked list safely
 * @h: head of the linked list
 * Return: the number of elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		diff = current - current->next;

		if (diff > 0)
		{
			free(current);
			current = next;
			count++;
		}
		else
		{
			free(current);
			current = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
