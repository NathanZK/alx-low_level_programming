#include "main.h"

/**
* times_table - 9 times table
*
*/
void times_table(void)
{
	int hor;
	int ver;
	int mul;

	for (hor = 0; hor <= 9; hor++)
	{
		for (ver = 0; ver <= 9; ver++)
		{
			mul = hor * ver;
			if (ver == 0)
				_putchar(mul + '0');
			if (ver != 0 && mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
