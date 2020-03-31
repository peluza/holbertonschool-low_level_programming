#include "holberton.h"

/**
 * create_file - create to file
 * @filename: file the name at create
 * @text_content: content of the text
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, i;
	mode_t mode;

	mode = O_RDWR | O_TRUNC | S_IRUSR | S_IWUSR;
	if (filename == NULL)
		return (-1);
	fp = creat(filename, mode);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		w = write(fp, text_content, i);
		if (w == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
