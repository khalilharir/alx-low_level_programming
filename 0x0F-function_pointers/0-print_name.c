#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - mane printed by using pointer
 * @name: name is tapped
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
