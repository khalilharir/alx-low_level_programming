#include "main.h"
#include <stdlib.h>
/**
 * _memset - it fills memory with a cte byte.
 * @s : Pointer to string. (Memory area)
 * @b : cte byte.
 * @n : Number of bytes filled.
 * Return: Pointer to the memory area 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
/**
 * _calloc - allocates memory for an array by using malloc.
 * @nmemb : Number of elements.
 * @size : Size of each element.
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (0);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (0);
	_memset(array, 0, size * nmemb);
	return (array);
}
