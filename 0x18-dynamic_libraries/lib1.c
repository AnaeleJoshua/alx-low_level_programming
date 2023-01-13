#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (0);
}
/**
 * _strncpy - copie a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
/**
 * _strlen - length of string
 * @s:char
 * Return:int
 */
int _strlen(char *s)
{
	return (0);
}
/**
 * _atoi - convert to an int
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	return (0);
}
/**
 * _puts - prints a string
 * @str: pointer char
 * return: void
 */
void _puts(char *str)
{

}
