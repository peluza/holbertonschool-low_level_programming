#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

	char ED;

	for (ED = 'a'; ED <= 'z'; ED++)
	{
		if (ED != 'e' && ED != 'q')
		putchar(ED);
	}
	putchar('\n');
	return (0);
}
