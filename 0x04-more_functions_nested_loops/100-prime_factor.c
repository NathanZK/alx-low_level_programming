#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int i, j, largeP, num_fac = 0;
	long int num = 612852475143;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			num_fac = 0;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
					num_fac++;
			}
			if (num_fac == 0)
				largeP = i;
		}
	}
	printf("%d\n", largeP);
	return (0);
}
