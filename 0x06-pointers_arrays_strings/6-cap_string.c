#include "main.h"

/**
* cap_string - capitalizes all words
* @a: string
* Return: uppercase string
*/

char *cap_string(char *a)
{
	int i;
	int count = 0;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		a[i] = a[i] - 32;
	}

	for (count = 0; a[count] != '\0'; count++)
	{
		for (i = 0; i < 13; i++)
		{
			if (a[count] == sep_words[i])
			{
				if (a[count + 1] >= 97 && a[count + 1] <= 122)
					a[count + 1] = a[count + 1] - 32;
					break;
			}
		}
	}


	return (a);
}
