#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ED[] = "Holberton";
	int a;

	for (a = 0; a <= 8; a++)
	{
		putchar(ED[a]);
	}
putchar('\n');
return(0);
}
