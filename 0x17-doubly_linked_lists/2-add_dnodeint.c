#include "main.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Pointer to pointer of first node
 * @n: Integer to store in node
 *
 * Return: Address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->previous = NULL;
	new->next = *head;
	if (*head)
		(*head)->previous = new;
	*head = new;

	return (new);
}
