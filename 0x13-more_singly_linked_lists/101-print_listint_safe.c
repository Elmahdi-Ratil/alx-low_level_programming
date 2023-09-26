#include "lists.h"
/**
 * print_listint_safe - print a linked list safely
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *prev;
	size_t count = 0, index;

	current = prev = NULL;
	current = head;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		prev = head;
		index = 0;

		while (index < count)
		{
			if (current == prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			prev = prev->next;
			index++;
		}

		if (head == NULL)
			exit(98);
	}

	return (count);
}
