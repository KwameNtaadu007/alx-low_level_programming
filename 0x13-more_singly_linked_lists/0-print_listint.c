#include "lists.h"


/**
 * print_listint - function to print singly linked list
 * @count: integer to hold number of nodes
 * @h: points to the head of the first node
 *
 * Return: counted number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("Empty linked list");
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
