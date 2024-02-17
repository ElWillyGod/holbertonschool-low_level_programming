#include <stdio.h>

/**
 * main - mostar fizz si es multiplo de 3
 * 	- Buzz si es multiplo de 5
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 2) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			if ((n % 2) == 0)
			{
				printf("Fizz ");
			}
			else
			{
				if((n % 5) == 0)
				{
					printf("Buzz ");
				}
				else
				{
					printf("%d ", n);
				}
			}
		}
	}
}
