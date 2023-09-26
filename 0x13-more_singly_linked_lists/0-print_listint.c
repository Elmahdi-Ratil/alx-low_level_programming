#include "lists.h"
/**
 *print_listint - print all the nodes in a linked list
 *@h: linked list
 *Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
