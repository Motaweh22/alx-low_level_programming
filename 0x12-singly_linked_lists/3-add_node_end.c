#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of list
 * @head: douublee poointeeer
 * @str: ssstriiingg
 * Return: aadddrrreesss
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neeew;
	list_t *temmp = *head;
	unsigned int lenen = 0;

	while (str[lenen])
		lenen++;

	neeew = malloc(sizeof(list_t));
	if (!neeew)
		return (NULL);

	neeew->str = strdup(str);
	neeew->len = lenen;
	neeew->next = NULL;
	if (*head == NULL)
	{
		*head = neeew;
		return (neeew);
	}
	while (temmp->next)
		temmp = temmp->next;

	temmp->next = neeew;
	return (neeew);
}
