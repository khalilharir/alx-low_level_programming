#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate
 *
 * Return: pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy characters from src to dest up to n or until src ends */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Append null terminator to the resulting string */
	dest[i] = '\0';

	return dest;
}
