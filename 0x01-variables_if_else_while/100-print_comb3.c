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
	int j = 0;

	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');

				if (i == 8 && j == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
