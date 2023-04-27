#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the end list
 * @head: douuuble pointeeer
 * @str: neeew striiiing addd
 * Return: _aaddrrreesss_
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neeew;
	unsigned int leenn = 0;

	while (str[leenn])
		leenn++;

	neeew = malloc(sizeof(list_t));
	if (!neeew)
		return (NULL);

	neeew->str = strdup(str);
	neeew->len = leenn;
	neeew->next = (*head);
	(*head) = neeew;
	return (*head);
}
