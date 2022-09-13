#include <stdio.h>
#include "main.h"

/**
 * main - Prints _putchar
 *
 * Description: when executed it prints _putchar.
 * Return: 0 (success)
*/

int main(void)
{
	char put[] = "_putchar";

	for (int i = 0; i <= 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
