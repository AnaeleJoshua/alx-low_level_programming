#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *  Return: always 0
 */

void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
