#include "main.h"

/**
 * more_numbers - nmbr fct
 * Bwave ICT file
 * Return: no return
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				i = k % 10;
			}
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
