#include<stdio.h>
#include<stdlib.h>

/**
 * *create_array - this is the funtion for creaates an array of chars
 * @size: the chars is number for buffer
 * @c: the chars for arraws
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int  j;
	char *m;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		m = malloc(size * sizeof(c));
		if (m == 0)
		{
			return (0);
		}
		else
		{

			for (j = 0; j < size; j++)
			{
				m[j] = c;
			}
			return (m);

		}

	}
}
