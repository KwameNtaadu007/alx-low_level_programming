#include "lists.h"

/**
 * listint_len - function to count number of nodes
 * @h: pointer to the head of the first node
 *
 * Return: number elements in listint_t
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
