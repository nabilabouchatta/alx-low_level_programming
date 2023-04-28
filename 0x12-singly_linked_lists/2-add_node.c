#include "lists.h"
#include <string.h>

/**
 * add_node - add a node to the beginnig of the list
 * @head: linked list
 * @str: string
 *
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *noode;
	int length;

	noode = malloc(sizeof(list_t));
	if (!noode)
		return (NULL);

	length = 0;
	while (str[length])
	{
		length++;
	}
	noode->str = strdup(str);
	noode->len = length;
	noode->next = (*head);
	(*head) = noode;
	return (noode);
}
