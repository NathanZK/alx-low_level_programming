#include "main.h"

/**
* cap_string - capitalizes all words
* @a: string
* Return: uppercase string
*/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122 && a[i - 1] < 64)
			a[i] = a[i] - 32;
	}

	return (a);
}
