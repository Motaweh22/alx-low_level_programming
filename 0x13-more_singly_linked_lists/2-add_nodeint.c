#include "lists.h"
/**
 * add_nodeint -  function that adds a new node at the beginning
 * @head: firrrst nodeee
 * @n: daataa
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nooew;

	nooew = malloc(sizeof(listint_t));
	if (!nooew)
		return (NULL);

	nooew->n = n;
	nooew->next = *head;
	*head = nooew;
	return (nooew);
}
