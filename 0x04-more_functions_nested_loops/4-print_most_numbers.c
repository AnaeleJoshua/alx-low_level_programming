#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints _putchar
 *
 * Description: when executed it prints _putchar.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
			_putchar(i);
	}
	_putchar('\n');
}
