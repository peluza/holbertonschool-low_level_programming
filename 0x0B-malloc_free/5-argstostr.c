#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - the funtion concatenates all the arguments
 * @ac:
 * @av:
 *
 */

char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	else
	{
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

	}
	return (0);
}

