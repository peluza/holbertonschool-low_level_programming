#include <stdio.h>

/**
 * main - the inition of the software
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
 *
 * Return: accept.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; argv++)
	{
	printf("%s\n", argv[i]);
	}
	(void)argv;
		return (0);
}
