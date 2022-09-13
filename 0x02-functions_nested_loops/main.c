#include <stdio.h>
#include "main.h"

/**
 * _putchar - Prints _putchar
 * @strin: string argument
 *
 * Description: when executed it prints _putchar.
 * Return: 0 (success)
*/

int main(void)
{
	char strin[] = "_putchar";

	for (int i = 0; i <= 9; i++)
	{
		_putchar(strin[i]);
	}
	_putchar("\n");
	return (0);
}
