#include "holberton.h"

/**
 * main - function that copies the content of a file to another file.
 * @argc: Filename
 * @argv: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */

int main(int argc, char *argv[])
{
	int src, dest, status;

	if (argc != 3 || argv == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	status = cpy_file(src, dest, argv[1], argv[2]);
	return (status);
}

/**
 * cpy_file - function copy the contain the fiale a to file
 * @src: File description source file
 * @dest: File description destination file
 * @name_src: Source file
 * @name_dest: Destination file
 * Return: 1 - Success or -1 - Failure.
 */

int cpy_file(int src, int dest, char *name_src, char *name_dest)
{
	int r, w;
	char buffer[1024];

	do {
		r = read(src, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name_src);
			exit(98);
		}
		w = write(dest, buffer, r);
		if (r != w || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_dest);
			exit(99);
		}
	} while (r == 1024);
	close(src);
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	close(dest);
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
