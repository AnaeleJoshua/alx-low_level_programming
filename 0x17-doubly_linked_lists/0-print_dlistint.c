#include "main.h"

/**
 * print_dlistint - Prints all elements of a linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	//Prints all elements of a linked list
	const dlistint_t *currentItem;
	size_t n;

	currentItem = h;
	n = 0;
	while (currentItem)
	{
		printf("%d\n", currentItem->n);
		currentItem = currentItem->next;
		++n;
	}
	return (n);
}
