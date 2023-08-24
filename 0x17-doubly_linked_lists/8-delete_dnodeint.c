#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentItem;
	size_t n;

	currentItem = h;
	n = 0;
	while (currentItem)
	{
		currentItem = currentItem->next;
		++n;
	}
	return (n);
}

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to a pointer of first node
 * @index: Index of node that should be deleted starting at 0
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentItem, *temp;
	unsigned int i;

	if (!*head || index > dlistint_len(*head))
		return (-1);
	temp = *head;
	currentItem = *head;
	i = 1;

	while (i < index)
	{
		if (!temp)
			return (-1);
		++i;
		temp = temp->next;
	}
	if (index)
	{
		currentItem = temp->next;
		temp->next = currentItem->next;
		if (temp->next)
		{
			temp = temp->next;
			temp->prev = currentItem->prev;
		}
	}
	else
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;

	}
	free(currentItem);
	return (1);
}
