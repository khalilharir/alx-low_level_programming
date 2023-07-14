#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min : min value.
 * @max : max value.
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *ints;
	int i;

	if (min > max)
		return (0);
	ints = malloc((max - min + 1) * sizeof(int));
	if (ints == NULL)
		return (0);
	ints[0] = min;
	for (i = 0; ints[i] < max; i++)
		ints[i + 1] = ints[i] + 1;
	return (ints);
}
