#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: the head
 * @n: number of elemnts.
 * Return: address of the new element,
 * if it failed then return NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));

	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = *head;
	*head = m;

	return (*head);
}
