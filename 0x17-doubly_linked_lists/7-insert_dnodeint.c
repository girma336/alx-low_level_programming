#include "lists.h"

/**
 *insert_dnodeint_at_index- insert at a given node
 *@idx: index the given data can be inserted
 *@head: first node
 *@n:new data can be inserted
 *Return: null the file can be failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;

	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(head, n));

	current = (*head);
	for (i = 0; i < idx && current; i++)
	{
		if (i == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(head, n));

			new->next = current->next;
			new->prev = current;
			(current->next)->prev = new;
			current->next = new;

			return (new);
		}
		else
			current = current->next;
	}

	return (NULL);
}
