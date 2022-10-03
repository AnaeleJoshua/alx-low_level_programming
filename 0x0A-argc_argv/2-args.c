#include <stdio.h>

/**
 *  main -> program to print its name
 *  @argc: argc parameter
 *  @argv: an array of a command listed
 *  Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
