#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node
 * @index: index of current node
 * @head: pointer to the head node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);

}
