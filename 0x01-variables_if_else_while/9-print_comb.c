#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int E;

        for (E = '0' ; E <= '9' ; E++)
        {
                putchar(E);
                if (E < '9')
                {
                putchar(',');
                putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
