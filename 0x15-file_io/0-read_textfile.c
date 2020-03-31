#include "holberton.h"

/**
 * read_textfile - read fot the file
 * @filename: file the name
 * @letters: number of letters for the print
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, r, w;
	char *tmp;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	tmp = malloc(sizeof(const char) * letters);
	r = read(fp, tmp, letters);
	if (r == -1)
	{
		free(tmp);
		return (0);
	}
	w = write(STDOUT_FILENO, tmp, r);
	if (r != w || w == -1)
	{
		free(tmp);
		return (0);
	}
	free(tmp);
	close(fp);
	return (w);
}
