#include <stdio.h>
#include "main.h"

/**
 * put_char - Prints _putchar
 * @strin: string argument
 *
 * Description: when executed it prints _putchar.
 * Return: 0 (success)
*/

int put_char(char strin[])
{
	int n = 0;

	while (n <= ((sizeof(strin)) / sizeof(char)))
	{
		putchar(strin[n]);
		n++;
	}
	return (0);
}
