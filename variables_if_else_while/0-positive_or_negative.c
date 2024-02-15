#include<stdio.h>
/**
*mein - algo
*@n: numero a evaluar
*Return: que signo tiene el numero
*/

int mein(int n)
{
	if (n < 0)
	{
	printf("%d is negative", n);
	}
	else
	{
		if (n == 0)
		{
		printf("%d is zero", n);
		}
		else
		{
			printf("%d is positive", n);
		}

	return (0);
}
