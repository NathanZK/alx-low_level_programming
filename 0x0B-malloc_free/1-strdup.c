#include "main.h"


/**
* _strdup - creates array
* @str: string
* Return: pointer
*/

char *_strdup(char *str)
{
	int i, j;
	char *ns;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ns = (char *)malloc((i + 1) * sizeof(char));

	if (ns == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ns[j] = str[j];

	return (ns);

}

