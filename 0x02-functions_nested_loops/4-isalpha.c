#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for lowercase alphabet
 *  @c: int arg
 *  Return: 0 success
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
		return (0);
}
