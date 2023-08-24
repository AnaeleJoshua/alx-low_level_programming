#include "lists.h"

/**
 * add_dnodeint - Adds a newNode node at the beginning of a list
 * @head: Pointer to pointer of first node
 * @n: Integer to store in node
 *
 * Return: Address of the newNode element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
