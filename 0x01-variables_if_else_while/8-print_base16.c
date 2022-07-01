#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	for (; i <= 'f'; i++)
		{
		if (i == '9' && i <= 'f')
		{
			putchar('9');
			i = 'a';
		}
		putchar(i);
		}
	putchar('\n');
	return (0);
}
