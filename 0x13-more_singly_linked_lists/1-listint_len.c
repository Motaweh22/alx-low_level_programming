#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h:	traaaversess
 * Return: numbeeer
 */
size_t listint_len(const listint_t *h)
{
	size_t nmuum = 0;

	while (h)
	{
		nmuum++;
		h = h->next;
	}
	return (nmuum);
}
