#include "lists.h"

/**
 * free_listint - plugs out a node from a list while
 * maintaining the link between remaining nodes
 * @head: pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *plug;

	while (head)
	{
		plug = head;
		head = head->next;
		free(plug);
	}
}
