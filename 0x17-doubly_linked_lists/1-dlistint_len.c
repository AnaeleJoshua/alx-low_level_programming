#include "main.h"

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
