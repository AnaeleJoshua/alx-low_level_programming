#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: pointer to interger
 * @b: pointer ti integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c, d;
	
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
