#include <stdio.h>

/**
 * main - the inition of the software
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
 *
 * Return: accept.
 */

int main(int __attribute__((unused))argc, char *argv[])
{
	int i = 0;

	while (i <= argc) 
	{
		argv++;
		printf("%s\n", argv[i]);
	}
	return (0);
}
