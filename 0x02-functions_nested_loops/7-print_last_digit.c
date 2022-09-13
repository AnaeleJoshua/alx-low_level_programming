#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: int arg
 * Return: always 0
 */

int print_last_digit(int n)
{
	int i;

	for (i = 0; i < ((sizeof(n)) / sizeof(int)))
	{
		if (n[i] == EOF)
		{
			return (n[i - 1]);
		}
	}
	return (0);
}
