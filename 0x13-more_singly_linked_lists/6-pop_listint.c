#include "lists.h"

/**
 * pop_listint - pop the head node but return it's data
 * @head: pointer to head node
 * Return: n or 0
 */

int pop_listint(listint_t **head)
{

listint_t *pop;
int n;

pop = *head;

if (pop == NULL)
return (0);

*head = pop->next;
n = pop->n;
free(pop);
return (n);

}
