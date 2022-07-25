#include "main.h"

/**
* argstostr - concatenates arguments
* @ac: argument number
* @av: argument vector
* Return: concat
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;

	str = (char *)malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
