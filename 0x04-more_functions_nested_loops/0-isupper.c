#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character,
 * followed by a new line
 * @c: function arg
 * Return: 1 cap, 0 othrwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
