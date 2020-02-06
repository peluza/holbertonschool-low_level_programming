#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int ED;

for (ED = 'a'; ED <= 'z'; ED++)
{
putchar(ED);
}
if(ED!='e' && ED!='q')
{
putchar(ED);
putchar('\n');
}
return (0);
}
