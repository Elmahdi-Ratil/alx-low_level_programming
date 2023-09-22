#include "lists.h"
/**
 *free_list - free linked lists
 *@head: head of the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
