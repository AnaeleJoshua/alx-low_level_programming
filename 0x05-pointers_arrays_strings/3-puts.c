#include "main.h"
#include "string.h"
/**
 * _puts - prints a string
 *
 * @str: string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
