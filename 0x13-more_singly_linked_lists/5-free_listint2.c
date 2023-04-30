#include "lists.h"
/**
 * free_listint2 - freeeeeeeeeees
 * @head: ppopointtteeeer
 */
void free_listint2(listint_t **head)
{
	listint_t *topemp;

	if (head == NULL)
		return;

	while (*head)
	{
		topemp = (*head)->next;
		free(*head);
		*head = topemp;
	}
	*head = NULL;
}
