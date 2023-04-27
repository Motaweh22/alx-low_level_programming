#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: freeeeeeeeee
 */
void free_list(list_t *head)
{
	list_t *temm;

	while (head)
	{
		temm = head->next;
		free(head->str);
		free(head);
		head = temm;
	}
}
