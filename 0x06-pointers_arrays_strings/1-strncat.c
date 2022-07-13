#include "main.h"
#include <string.h>
/**
* _strncat - appends string
* @dest: character parameter
* @src: character parameter
* @n: integer parameter
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
