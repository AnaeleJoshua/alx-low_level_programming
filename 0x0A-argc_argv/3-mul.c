#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  main -> program to multiply two numbers
 *  @argc: argc parameter
 *  @argv: an array of a command listed
 *  Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
                {
                        printf("%s\n", "Error");
			return (1);
                }

	for (i = 1; i <= argc - 1; i++)
	{
			mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
