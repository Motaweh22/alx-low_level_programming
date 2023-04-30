#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data
 * @head: nodeee
 * Return: sklum
 */
int sum_listint(listint_t *head)
{
	int sklum = 0;
	listint_t *tklemp = head;

	while (tklemp)
	{
		sklum += tklemp->n;
		tklemp = tklemp->next;
	}
	return (sklum);
}
