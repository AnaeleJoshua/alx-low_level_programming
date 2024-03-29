#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of a list
 * @head: Pointer to pointer of first node
 * @n: Integer to store in node
 *
 * Return: Address of new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *currentItem;

	currentItem = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (currentItem->next)
			currentItem = currentItem->next;
		new->prev = currentItem;
		currentItem->next = new;
	}

	return (new);
}
