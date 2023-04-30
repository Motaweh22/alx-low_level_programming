#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointeeer
 * @idx: indeeex
 * @n: daaataa
 * Return: pointeeer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ll;
	listint_t *nnmew;
	listint_t *tnmemp = *head;

	nnmew = malloc(sizeof(listint_t));
	if (!nnmew || !head)
		return (NULL);

	nnmew->n = n;
	nnmew->next = NULL;
	if (idx == 0)
	{
		nnmew->next = *head;
		*head = nnmew;
		return (nnmew);
	}
	for (ll = 0; tnmemp && ll < idx; ll++)
	{
		if (ll == idx - 1)
		{
			nnmew->next = tnmemp->next;
			tnmemp->next = nnmew;
			return (nnmew);
		}
		else
			tnmemp = tnmemp->next;
	}
	return (NULL);
}
