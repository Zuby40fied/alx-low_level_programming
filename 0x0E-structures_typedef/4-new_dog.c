#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int v;

	v = 0;

	while (s[v] != '\0')
	{
		v++;
	}

	return (v);
}
/**
 * *_strcpy - copies the string pointed to by the src
 * including the terminating null bytes (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: string to be copied
* Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, v;
		len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (v = 0; v < len; v++)
	{
		dest[v] = src[v];
	}
	dest[v] = '\0';

	return (dest);
}
