#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat- check the code
 *
 * @dest: destination string
 * @src: source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
