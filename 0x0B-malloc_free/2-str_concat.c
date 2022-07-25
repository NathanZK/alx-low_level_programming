#include "main.h"

/**
* str_concat - concatenates strings
* @s1: string
* @s2: string
* Return: concat
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *stdout;

	i = 0, j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";	
	stdout = (char *)malloc((i + j + 1) * sizeof(char));
	if (stdout == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		stdout[k] = s1[k];
	for (l = 0; l <= j; l++)
		stdout[l + i] = s2[l];
	return (stdout);
}


