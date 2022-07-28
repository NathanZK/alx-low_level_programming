#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: integer
* @size: size of array
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	p = s;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';

	return (s);
}

