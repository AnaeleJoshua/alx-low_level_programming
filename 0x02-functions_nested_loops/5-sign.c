#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for sign
 *  @n: int arg
 *  Return: 0 success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (0);
	}

}
