#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	list_t *mover;
	size_t count = 0;
	
	mover = h;

	while(h -> next != 0)
	{
		if( h->str == '\0')
		{
			printf(0);

		}
		else
		{
			printf("[%u] %s\n");
		}
	}
	counter++;
	h = h -> next;

	return (count);
}
