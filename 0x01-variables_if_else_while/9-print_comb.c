#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ED;

	for (ED = '0' ; ED <= '9' ; ED++)
	{
		putchar(ED);
		if (ED < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
