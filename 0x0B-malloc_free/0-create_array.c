#include "main.h"

/**
* create_array - creates array
* @size: size
* @c: character argument
* Return: array
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	i = 0;
	while (i < (int)size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);

}
