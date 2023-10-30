#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int p, q, r = 0, g = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			g++;
	}
	g += ac;

	str = malloc(sizeof(char) * g + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
	for (q = 0; av[p][q]; q++)
	{
		str[r] = av[p][q];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

