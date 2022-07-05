#include <stdio.h>
#include "main.h"

/**
* _natural - sum of multiples of 3 and 5
*
*/
void _natural(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
		else if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}







