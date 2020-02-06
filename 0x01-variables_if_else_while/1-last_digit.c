#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int n, x;
char texto[] = "Last digit of";
char textoa[] = "is";
char textob[] = "and is 0";
char textoc[] = "and is greater than 5";
char textod[] = "and is less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("%s %d %s %i %s\n", texto, n, textoa, x, textoc);
else if (x == 0)
printf("%s %d %s %i %s\n", texto, n, textoa, x, textob);
else
printf("%s %d %s %i %s\n", texto, n, textoa, x, textod);
return (0);
}
