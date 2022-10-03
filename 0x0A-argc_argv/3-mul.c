#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  main -> program to multiply two numbers
 *  @argc: argc parameter
 *  @argv: an array of a command listed
 *  Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	for (i = 1; i <= argc - 1; i++)
	{
		if (argc < 3)
		{
			printf("Error");
		}
		else
		{
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
