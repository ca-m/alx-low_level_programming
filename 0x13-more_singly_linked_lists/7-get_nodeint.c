#include "lists.h"

/**
 * get_nodeint_at_index - nth node of linked list
 * @head: pointer of first node
 * @index: index of nnode
 * Return: pointer of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
