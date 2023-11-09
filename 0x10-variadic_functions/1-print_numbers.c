#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers,followed by a newline.
 * @separator: The string to be printed between the  numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int power;

	va_start(nums, n);
	for (power = 0; power < n; power++)
	{
		printf("%d", va_arg(nums, int));

	if (power != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

		printf("\n");

		va_end(nums);
}
