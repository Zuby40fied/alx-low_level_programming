#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int Dog, c, w;

	dog = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			dog = 0;
		else if (dog == 0)
		{
			dog = 1;
			w++;
		}
	}

	return (w);
}
