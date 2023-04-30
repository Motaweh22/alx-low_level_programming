#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: poinnnterrr
 * @index: indeeex
 * Return: (Success)or(Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tqwemp = *head;
	listint_t *cqwurrent = NULL;
	unsigned int ll = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tqwemp);
		return (1);
	}
	while (ll < index - 1)
	{
		if (!tqwemp || !(tqwemp->next))
			return (-1);
		tqwemp = tqwemp->next;
		ll++;
	}
	cqwurrent = tqwemp->next;
	tqwemp->next = cqwurrent->next;
	free(cqwurrent);
	return (1);
}
