#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int ED;

for (ED = '0'; ED <= '9'; ED++)
{
putchar(ED);
}
for (ED = 'a'; ED <= 'f'; ED++)
{
putchar(ED);
}
putchar('\n');
return (0);
}
