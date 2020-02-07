#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int E, D;

        for (E = '0' ; E <= '9' ; E++)
        {
                for (D = '0' ; D <= '9' ; D++)
                {
                        putchar(E);
                        putchar(D);
                        if (!(E == '9' && D == '9'))
                        {
                        putchar(',');
                        putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
