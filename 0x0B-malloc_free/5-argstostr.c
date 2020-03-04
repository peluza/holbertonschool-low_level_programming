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
	int i;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		else
		{
			printf("%s\n", av[i]);
		}
	}
	return (av[i]);
}
