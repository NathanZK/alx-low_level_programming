#include "main.h"

/**
* _isalpha - checks for lowercase characters
* @c: a character argument
* Return: 1 if lowercase or uppercase
*/
int _isalpha(int c)
{

	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
