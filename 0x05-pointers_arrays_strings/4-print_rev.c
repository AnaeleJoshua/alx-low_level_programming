#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: str
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j = 0;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i + 1;
	}
	for (i = 0; i < j / 2; i++)
	{
		ch = str[i];
		str[i] = str[j - 1 - i];
		str[j - 1 - i] = ch;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
