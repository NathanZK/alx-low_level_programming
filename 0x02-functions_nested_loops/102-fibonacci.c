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

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 50; i++)
	{

		if (i < 49)
			printf("%ld, ", fib[i]);
		else
			printf("%ld", fib[i]);
	}
return (0);
}
