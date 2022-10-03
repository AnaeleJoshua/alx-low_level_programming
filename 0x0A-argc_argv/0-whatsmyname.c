#include <stdio.h>

/**
 *  main -> program to print its name
 *  @argc: argc parameter
 *  @argv: an array of a command listed
 *  Return: 0 for success
 *  */
int main(int argc __attribute__((unused)), char *argv)
{
	printf("%s\n",*argv);
}
