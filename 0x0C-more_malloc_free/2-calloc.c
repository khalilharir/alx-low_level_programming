#include <stdlib.h>
#include "main.h"

/**
 * *_memset - it fills memory with a cte byte
 * @s: memory area to be filled
 * @b: char to be copied 
 * @n: how many time b is copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - it allocates memory for array
 * @elem_numb: elements number in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int elem_numb, unsigned int size)
{
	char *ptr;

	if (elem_numb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * elem_numb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, elem_numb * size);

	return (ptr);
}
