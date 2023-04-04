#include "lists.h"


/**
 * print_listint - function to print singly linked list
 * @h: points to the head of the first node
 *
 * Return: counted number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
