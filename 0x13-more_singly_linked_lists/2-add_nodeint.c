#include "lists.h"


/*
 *add_nodeint - adds new head to a list
 *@head: pointer to the fist node of the list
 *@n: value to be store in the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	if (*head)
	{
		new_head->next = *head;
	}

	*head = new_head;

	return (new_head);
}
