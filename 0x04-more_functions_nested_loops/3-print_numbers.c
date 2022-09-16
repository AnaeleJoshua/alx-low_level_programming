#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints _putchar
 *
 * Description: when executed it prints _putchar.
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
