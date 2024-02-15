#include<stdio.h>
/**
*main - cosas
*Return: sadsad
*/
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
	if (!((i >= 58) && (i <= 96)))
	{
		putchar(i);
	}
	}

	putchar(10);

	return (0);
}
