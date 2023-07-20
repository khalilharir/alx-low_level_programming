#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator : the string to be printed between number.
 * @n : the number of integers passed to the function.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_nums;
	unsigned int i;

	if (separator == NULL)
		separator = "\0";
	va_start(list_nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_nums, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
