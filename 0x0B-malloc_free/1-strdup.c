#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int f, v = 0;

	if (str == NULL)
		return (NULL);
	f = 0;
	while (str[f] != '\0')
		f++;

	aaa = malloc(sizeof(char) * (f + 1));

	if (aaa == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		aaa[v] = str[v];

	return (aaa);
}
