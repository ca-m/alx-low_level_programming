#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at beginning of linked list
 * @head: double pointer to beginning of linked list
 * @n: value to add to new node
 * Return: pointer to new node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
