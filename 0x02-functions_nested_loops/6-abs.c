#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value
 * @n: int arg
 * Return: always 0
 */

int _abs(int n)
{
	if (n <= 0)
	{
		_putchar(n * -1);
	}
	else
		_putchar(n);
	return (0);
}
