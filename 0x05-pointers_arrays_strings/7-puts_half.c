#include "main.h"
#include <string.h>
/**
* puts_half -  prints a string
* @str: string
*/
void puts_half(char *str)
{
	int i, len;

	len = (int)strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len + 1) / 2; i < len ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
