#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: NULL
 *
 */
void free_grid(int **grille, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grille[a]);
	}
	free(grille);
}

