#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to the POSIX
* @filename: file to read and write
* @letters: number of letters.
* Return: letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ltr;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	ltr = read(file, text, sizeof(char) * letters);
	if (ltr == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	ltr = write(STDOUT_FILENO, text, ltr);
	if (ltr == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (ltr);
}
