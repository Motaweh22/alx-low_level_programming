#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: liiistt_
 */
void free_listint(listint_t *head)
{
	listint_t *tttremp;

	while (head)
	{
		tttremp = head->next;
		free(head);
		head = tttremp;
	}
}
