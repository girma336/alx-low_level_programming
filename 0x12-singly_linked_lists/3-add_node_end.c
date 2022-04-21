#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end-insert the data at the end of node
 *@str:char
 *@head:list
 *Return:the data
 */



list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new_node;
list_t *last;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

last = (*head);

new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;

return (new_node);
}
