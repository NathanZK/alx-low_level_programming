#include "main.h"
#include <string.h>
/**
* puts2 -  prints a string
* @str: string
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
