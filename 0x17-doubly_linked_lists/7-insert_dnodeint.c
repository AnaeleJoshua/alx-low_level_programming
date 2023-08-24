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
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to pointer of first node
 * @idx: Index of the list where the new node should be added
 * @n: Value to be assigned to node
 *
 * Return: Address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentItem, *new;
	unsigned int i;

	currentItem = *h;
	i = 1;

	if ((!currentItem && idx) || idx > dlistint_len(*h))
		return (NULL);
	while (i < idx)
	{
		if (!currentItem)
			return (NULL);
		++i;
		currentItem = currentItem->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx)
	{
		new->prev = currentItem;
		new->next = currentItem->next;
		currentItem->next = new;
		if (new->next)
		{
			currentItem = new->next;
			currentItem->prev = new;
		}
	}
	else
	{
		new->prev = NULL;
		new->next = currentItem;
		if (new->next)
			currentItem->prev = new;
		*h = new;
	}
	new->n = n;
	return (new);
}
