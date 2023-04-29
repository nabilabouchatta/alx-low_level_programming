#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Retun: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((tep = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
