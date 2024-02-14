#include<stdio.h>

/**
*main - cositas
*Return: mas coasa
*/

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	ptintf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	ptintf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	ptintf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	ptintf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	ptintf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
