#include "main.h"

/**
* print_last_digit - prints last digit
* @n: integer argument
* Return: last digit
*/
int print_last_digit(int n)
{

	int last;

	if (n < 0)
		n = -n;

	last = n % 10;
	_putchar(last + '0');

	return (last);
}
