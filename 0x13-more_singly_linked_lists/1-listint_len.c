#include "lists.h"
/**
 *listint_len - return the number of nodes in linked list
 *@h: linked list
 *Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
