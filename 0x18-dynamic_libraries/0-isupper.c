#include "holberton.h"

/**
* _isupper - the search word in the upper
*
*@c: character is lowercase
*
* Return: Always 0 (Success)
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
