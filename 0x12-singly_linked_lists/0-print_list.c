#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list.
 *@h : the pointer
 *Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		if (!h->str)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	length++;
	printf("[%d] %s\n", h->len, h->str);
	return (length);
}
