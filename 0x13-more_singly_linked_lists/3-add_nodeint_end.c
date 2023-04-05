#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to he first node
 * @n: an data for the new node
 * Return: address of last node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *ptr = *head;

	last_node = malloc(sizeof(listint_t));
	if (last_node != NULL)
	{
		last_node->n = n;
		last_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_node;
	}
	else
		*head = last_node;
	return (last_node);
}
