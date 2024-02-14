#include<stdio.h>

/**
*main - cositas
*Return: mas coasa
*/
int main(void)
{
	int numero;
	char caracter;
	long int largoint;
	long long int masLargoInt;
	float punto_Flotante;

	ptintf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(caracter));
	ptintf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(numero));
	ptintf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(largoint));
	ptintf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(masLargoInt));
	ptintf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(punto_Flotante));

	return (0);
}
