#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
pirntf("%i is positive", n );
}
else if(n<0)
{
	
printf("%i is negative", n);
}
else if(n==0)
{
printf("%i is zero", n);

}
return (0);
}
