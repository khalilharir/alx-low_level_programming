#include "main.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * _strdup - Copy a string and return a pointer to new allocated memory.
 * @str : Pointer to string.
 * Return: Pointer to new copy.
 */
char *_strdup(char *str)
{
	int i;
	char *copy_str;

	if (str == NULL)
		return (0);
	copy_str = (char *)malloc(_strlen(str) + 1);
	if (copy_str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		copy_str[i] = str[i];
	return (copy_str);
}
