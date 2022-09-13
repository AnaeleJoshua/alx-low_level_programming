#include <stdio.h>
#include "main.h"

/**
 * main - prints putchar
 *  Return: always 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
