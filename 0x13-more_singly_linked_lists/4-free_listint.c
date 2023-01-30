#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees list listint_t
 * @head: head of list
 * Return: Null if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
