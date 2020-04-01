#include "holberton.h"

/**
 * append_text_to_file - append text at to file
 * @filename: file the name at create
 * @text_content: content of the text
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, i;
	mode_t mode;

	mode = O_APPEND | O_WRONLY;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = strlen(text_content);
	fp = open(filename, mode);
	if (fp == -1)
		return (fp);
	w = write(fp, text_content, i);
	if (w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
