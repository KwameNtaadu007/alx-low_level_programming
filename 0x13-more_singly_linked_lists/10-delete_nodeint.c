#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a specified index
 * @head: pointer to the first node in the list
 * @index: location the target node
 *
 * Return: 1 for success or -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *temp = *head;
unsigned int node;

if (temp == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (temp->next == NULL)
return (-1);

temp = temp->next;
}

ptr = temp->next;
temp->next = ptr->next;
free(ptr);
return (1);
}
