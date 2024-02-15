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
	printf("Last digit of %d is %d and is 0\n", n, ultimoNumero);
	}
	else
	{
		if (ultimoNumero > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimoNumero);
		}
		if (ultimoNumero < 6)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimoNumero);
		}
	}

	return (0);
}

