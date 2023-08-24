#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to list being freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentItem;

	while (head)
	{
		currentItem = head;
		head = head->next;
		free(currentItem);
	}
}
