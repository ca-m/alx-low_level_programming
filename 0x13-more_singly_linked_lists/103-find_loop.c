#include "lists.h"

/**
 * find_listint_loop - finds loop in list
 * @head: pointer to head of list
 * Return: if no loop - null, otherwise - node address where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *totoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
