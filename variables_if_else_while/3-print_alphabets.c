#include<stdio.h>
/**
*main - mostrar las letras
*Return: coigo de error
*/

int main(void)
{
	char c = 97;

	while (c <= 122)
	{
	printf("%c", c);
	}
	c = 65;

	while (c <= 90)
	{
	printf("%c", c);
	}
	printf("\n");

	return (0);
}

