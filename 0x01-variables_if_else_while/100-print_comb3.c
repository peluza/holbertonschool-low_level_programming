#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int E, D;


	for (E = '0' ; E <= '8' ; E++)
	{
		for (D = E + 1 ; D <= '9' ; D++)
		{

			putchar(E);

			putchar(D);

			if (!(E == '8' && D == '9'))
			{
				putchar(',');

				putchar(' ');

			}

		}
	}
putchar('\n');
return (0);
}
