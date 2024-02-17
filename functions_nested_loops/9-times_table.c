#include "main.h"

/**
 *times_table - tabla del 0 al 9
 *Return: nada
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
			{
				if (j != 9)
				{
					printf("%2d, ", i * j);
				}
				else
				{
					printf("%2d", i * j);
				}
			}
			else
			{
				printf("%d, ", j);
			}
		}

		printf("\n");
	}
}
