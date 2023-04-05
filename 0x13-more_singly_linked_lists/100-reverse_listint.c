#include "lists.h"

/**
 * reverse_listint - reverss a linked list
 * @head: first node of the list before reverse
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

listint_t *ptr = NULL;
listint_t *ne = NULL;

	while (*head)
	{
		ne = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ne;
	}

	*head = ptr;

	return (*head);
}
