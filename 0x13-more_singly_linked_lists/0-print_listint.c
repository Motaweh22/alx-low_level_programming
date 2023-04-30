#include "lists.h"
/**
 * print_listint - function that prints all the elemens
 * @h: linkeed lissst typee
 *
 * Return: numbeeer
 */
size_t print_listint(const listint_t *h)
{
	size_t numum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numum++;
		h = h->next;
	}
	return (numum);
}
