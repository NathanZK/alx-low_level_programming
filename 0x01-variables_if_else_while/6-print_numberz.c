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
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}

