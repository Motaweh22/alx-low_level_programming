#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new nodeee
 * @head: pooointeeer
 * @n: datttaaa
 * Return: nodeee or NULL if it faaails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nttew;
	listint_t *tvvemp = *head;

	nttew = malloc(sizeof(listint_t));
	if (!nttew)
		return (NULL);

	nttew->n = n;
	nttew->next = NULL;
	if (*head == NULL)
	{
		*head = nttew;
		return (nttew);
	}
	while (tvvemp->next)
		tvvemp = tvvemp->next;

	tvvemp->next = nttew;
	return (nttew);
}
