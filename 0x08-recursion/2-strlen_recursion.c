#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s : Pointer to string.
 * Return: void (length of a string).
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
