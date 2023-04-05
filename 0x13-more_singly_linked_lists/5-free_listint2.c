#include "lists.h"

/**
 * free_listint2 - free and node and sets head to NULL
 * @head: pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *plug;

if (head == NULL)
return;

while (*head)
{
plug = *head;
*head = (*head)->next;
free(plug);
}

head = NULL;

}
