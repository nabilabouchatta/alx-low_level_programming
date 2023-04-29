#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a linked list
 * @head: the head
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->next;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
