#include "lists.h"

/**
 * sum_listint - computes the sum data in all nodes
 * @head: pointer to the first node
 *
 * Return: sum of all int n or 0
 */


int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
