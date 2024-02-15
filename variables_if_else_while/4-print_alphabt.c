#include<stdio.h>
/**
*main - mostrar todo menos la q y e
*Return: retornamos el codigo de error
*/

int main(void)
{
	char c = 97;

	while (c <= 122)
	{
	if ((c != 113) && (c != 101))
	{
		printf("%c", c);
	}
	c++;
	}

	printf("\n");

	return (0);
}
