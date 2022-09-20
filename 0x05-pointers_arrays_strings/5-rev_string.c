#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the string
 *
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char temp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
