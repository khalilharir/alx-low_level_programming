#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - each array is printed 
 * @ar: array to print
 * @size: size of arrays to print
 * @ptp: pointer to print 
 * Return: void
 */
void array_iterator(int *ar, size_t size, void (*ptp)(int))
{
	unsigned int i;

	if (ar == NULL || ptp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		ptp(ar[i]);
	}
}
