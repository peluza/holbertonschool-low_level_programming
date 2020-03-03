#include<stdio.h>
#include<stdlib.h>

/**
 * *_strdup - this is the funtion for creates a copy of the string
 * @str: the is a punter
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	unsigned int  j, i;
	char *m;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{

		}

		m = malloc((i + 1) * sizeof(str));

		if (m == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				m[j] = str[j];

			}

			return (m);

		}

	}
}
