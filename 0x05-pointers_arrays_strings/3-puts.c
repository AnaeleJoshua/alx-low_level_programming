#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
