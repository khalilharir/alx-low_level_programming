#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator : the string to be printed between the strings.
 * @n : The number of strings to be printed.
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "\0";
	va_start(list_strings, n);
	for (i = 0; i < n; i++)
	{
		take_string = va_arg(list_strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
