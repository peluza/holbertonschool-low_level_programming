#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - the funtion concatenates all the arguments
 * @ac: the count a chars
 * @av: the chars nex to a title
 *
 *
 * Return: av
 */

char *argstostr(int ac, char **av)
{
	int i, j, z = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}
	c = c + ac;
	s = malloc(sizeof(char) * c + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[z] = av[i][j];
			z++;
		}
		if (s[z] == '\0')
			s[z++] = '\n';
	}
	return (s);
}
