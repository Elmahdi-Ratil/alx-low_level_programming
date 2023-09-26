include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer to pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = (*head);

	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
