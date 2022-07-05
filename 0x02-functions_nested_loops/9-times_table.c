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

			if (mul > 9)
			{
				_putchar (mul / 10 + '0');
			}

			_putchar (mul % 10 + '0');

			if (mul != 81)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar('\n');
	}

}
