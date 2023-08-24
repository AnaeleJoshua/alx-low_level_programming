#include "main.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to start of list
 * @index: Index of node, starting from 0
 *
 * Return: Specified node of a linked list or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentItem;
	unsigned int n;

	currentItem = head;
	n = 0;

	while (currentItem)
	{
		if (n == index)
			return (currentItem);
		currentItem = currentItem->next;
		++n;
	}
	return (NULL);
}
