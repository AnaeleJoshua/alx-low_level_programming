#include <stdio.h>
#include "list_h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	list_t *mover;
	int count = 0;
	
	mover = h;

	while(mover -> next != 0)
	{
		if( h->str == '\0')
		{
			count++;
			printf(0);

		}
		else
		{
			count++;
			mover = mover -> next;
			
		}
	}
	
	return counter;
}
