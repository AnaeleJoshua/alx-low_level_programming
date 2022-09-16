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

	for (j = 1; j <= 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(i);
		}
		for (j = 49; j < 50; j++)
		{
			for (i = 48; i <= 52; i++)
			{
				putchar(j + i);
			}
		}
	}
	putchar('\n');
}
