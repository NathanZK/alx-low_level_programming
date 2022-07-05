#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{

	long int fib[50];
	int i;
	long int evenS = 0;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; fib[i] <= 4000000; i++)
	{
		if (fib[i] % 2 == 0)
			evenS += fib[i];
	}

	printf("%ld", evenS);
	putchar('\n');
return (0);
}
