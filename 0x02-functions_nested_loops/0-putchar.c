#include <stdio.h>
#include "main.h"

/**
 * Main - Prints _putchar
 *
 * Description: when executed it prints _putchar.
 * Return: 0 (success)
 */
int main(void)
{
	char strin[] = "_putchar";
	int n = 0;

	while (n <= ((sizeof(strin)) / sizeof(char)))
	{
		putchar(strin[n]);
		n++;
	}
	return (0);
}
