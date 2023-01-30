#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - functions that frees list
 * @head: double pointer of lists
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head != NULL)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
		}
	}
}
