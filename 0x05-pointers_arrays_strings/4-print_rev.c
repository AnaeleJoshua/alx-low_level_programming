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

	for (i = 0; s[i] != '\0'; i++)
	{
		j = i + 1;
	}
	for (i = 0; i < j / 2; i++)
	{
		ch = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = ch;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
