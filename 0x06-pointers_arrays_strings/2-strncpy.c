#include "main.h"
#include <string.h>
/**
* _strncpy - copies string
* @dest: character parameter
* @src: character parameter
* @n: integer parameter
* Return: concatenated string
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
