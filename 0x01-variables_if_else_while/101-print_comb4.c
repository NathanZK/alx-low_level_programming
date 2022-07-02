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
	int k = 0;

	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			k = 0;
			for (; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');

					if (i == 7 && j == 8 && k == 9)
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
	}
	putchar('\n');
	return (0);
}

