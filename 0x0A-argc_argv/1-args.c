#include <stdio.h>

/**
 *  main -> program number of argument
 *  @argc: argc parameter
 *  @argv: an array of a command listed
 *  Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
