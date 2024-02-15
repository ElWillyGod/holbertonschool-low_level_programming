#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
*main - no se que
*Return: codigo de error
*/

int main(void)
{
	int n;
	int ultimoNumero;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimoNumero = n % 10;

	if (ultimoNumero == 0)
	{
	printf("is %d and is 0\n", ultimoNumero);
	}
	else
	{
		if (ultimoNumero > 5)
		{
		prinf("is %d and is greater than 5", ultimoNumero);
		}
		if (ultimoNumer < 6)
		{
		printf("is %d and is less than 6 and not 0", ultimoNumero);
		}
	}

	return (0);
}

