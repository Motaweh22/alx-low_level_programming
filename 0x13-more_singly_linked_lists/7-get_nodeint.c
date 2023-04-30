#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node//
 * @head: nodee
 * @index: indeeex
 * Return: yeeees or noooooo
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ll = 0;
	listint_t *tcvemp = head;

	while (tcvemp && ll < index)
	{
		tcvemp = tcvemp->next;
		ll++;
	}
	return (tcvemp ? tcvemp : NULL);
}
