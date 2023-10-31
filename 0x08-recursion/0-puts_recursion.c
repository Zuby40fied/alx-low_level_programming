#include "main.h"
/**
 * _puts_recursion - function like puts(); and prints a new line
 * @s: input
 * Return: Always zero 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
