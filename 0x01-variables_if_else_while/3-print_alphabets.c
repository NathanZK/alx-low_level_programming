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
	char i = 'a';
	char j = 'A';

	for (; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

