#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;
	char cap;

	for (low = 'a'; low <= 'Z'; low++)
		putchar(low);
	for (cap = 'A'; cap <= 'Z'; cap++)
		putchar(cap);
	putchar('\n');

	return (0);
}
