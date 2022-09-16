#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints _putchar
 *
 * Description: when executed it prints _putchar.
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 62; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
