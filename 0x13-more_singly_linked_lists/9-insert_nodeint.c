#include "lists.h"

/**
 *insert_nodeint_at_index-insert the nth node
 *@head:pointer of the first node
 *@idx:index of index is inserted
 *@n:new_data
 *Return:listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *new_node;
listint_t *current = (*head);
new_node = malloc(sizeof(listint_t));

if (!head || !new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;

while (current && count < idx)
{
if (count == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
else
current = current->next;
count++;
}
return (NULL);
}
