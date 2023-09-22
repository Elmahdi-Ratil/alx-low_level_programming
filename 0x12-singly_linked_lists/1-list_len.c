#include "lists.h"
/**
 *list_len - returns the len of the linked list
 *@h: linked list
 *Return: the number of element in the linked list
 *
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
