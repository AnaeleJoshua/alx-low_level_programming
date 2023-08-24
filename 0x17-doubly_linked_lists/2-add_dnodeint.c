#include "main.h"

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

	newNode = malloc(sizeof(dlistint_t));//create new node, an returns address of new node
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->previous = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->previous = newNode;
	*head = newNode;

	return (newNode);
}
