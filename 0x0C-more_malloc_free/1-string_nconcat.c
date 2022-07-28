#include "main.h"

/**
* string_nconcat - concatenates strings
* @s1: string
* @s2: string
* @n: integer
* Return: concat
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *stdout;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	stdout = malloc((i + n + 1) * sizeof(char));
	if (stdout == NULL)
		return (0);

	for (k = 0; k < i; k++)
		stdout[k] = s1[k];
	for (; k < (n + i); k++)
		stdout[k] = s2[k - i];
	stdout[k] = '\0';
	return (stdout);
}

