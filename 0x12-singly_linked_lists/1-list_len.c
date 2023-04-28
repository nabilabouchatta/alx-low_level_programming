#include "lists.h"

/**
 * list_len - computes the number of nodes in a list
 * @h: the pointer
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t how;

	how = 0;
	while (h)
	{
		how++;
		h = h->next;
	}
	return (how);
}
