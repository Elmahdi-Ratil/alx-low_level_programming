#include "lists.h"
/**
 *print_list - prints all element of linked lists
 *@h: linked list
 *Return: the number of element in the linked list
 *
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
