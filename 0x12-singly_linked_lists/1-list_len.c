#include <stdlib.h>
#include "lists.h"
/**
 * list_len - functionreturnnumberelementinlinkedlist_t list.
 * @h: pooointeeeeer
 * Return: nuuumber_eleeements
 */
size_t list_len(const list_t *h)
{
	size_t kkk = 0;

	while (h)
	{
		kkk++;
		h = h->next;
	}
	return (kkk);
}
