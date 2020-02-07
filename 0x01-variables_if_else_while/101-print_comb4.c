#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int E, D, M;


	for (E = '0' ; E <= '7' ; E++)
	{
		for (D = E + 1 ; D <= '8' ; D++)
		{

			for (M = D + 1 ; M <= '9' ; M++)
			{
			putchar(E);

			putchar(D);

			putchar(M);
			if (!(E == '7' && D == '8' && M == '9'))
			{
				putchar(',');

				putchar(' ');

			}

			}
		}
	}
putchar('\n');
return (0);
}
