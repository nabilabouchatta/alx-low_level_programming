#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list.
 *@h : the pointer
 *Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t how;

	how = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		how++;
		h = h->next;
	}
	return (how);
}
