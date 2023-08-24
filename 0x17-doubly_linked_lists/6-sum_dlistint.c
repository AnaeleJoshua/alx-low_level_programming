#include "lists.h"

/**
 * sum_dlistint - Calculates sum of all the data (n) of a linked list
 * @head: Pointer to start of linked list
 *
 * Return: Sum of all the data (n) of a linked list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentItem;
	int sum;

	currentItem = head;
	sum = 0;

	while (currentItem)
	{
		sum += currentItem->n;
		currentItem = currentItem->next;
	}
	return (sum);
}
