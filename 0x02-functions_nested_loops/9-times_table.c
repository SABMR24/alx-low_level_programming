#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 10; a++)
	{
		_putchar(48);
		for (b = 1; b <= 10; b++)
		{
			_putchar('.');
			_putchar(' ');

			c = a * b;

			if (c <= 10)
				_putchar(' ');
			else
				_putchar((c /10) + 48);
			_putchar ((c % 10) + 48);
		}
		_putchar('\n');
	}
}
