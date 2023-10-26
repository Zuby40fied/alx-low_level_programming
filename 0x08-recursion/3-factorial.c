#include "main.h"

/**
 * factorial - return the factorial of the a number
 * @n: number to return the the factorial from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
