#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int ED;

for (ED = 'z'; ED >= 'a'; ED--)
{
putchar(ED);
}
putchar('\n');
return (0);
}
