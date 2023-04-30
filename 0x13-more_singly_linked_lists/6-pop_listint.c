#include "lists.h"
/**
 * pop_listint - deleeetes the head nodeee
 * @head: pointeeer
 *
 * Return: nbbum ooor 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tloemp;
	int nbbum;

	if (!head || !*head)
		return (0);

	nbbum = (*head)->n;
	tloemp = (*head)->next;
	free(*head);
	*head = tloemp;
	return (nbbum);
}
