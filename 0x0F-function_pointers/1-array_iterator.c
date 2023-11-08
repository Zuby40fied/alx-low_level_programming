#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: how many elements  to be printed
 * @action: pointer to be printed in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array == NULL || action == NULL)
		return;

	for (t = 0; t < size; t++)
	{
		action(array[t]);
	}
}
