#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the int the extra digit from
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	last_digit = -1;
	last_digit = n % 10;

	if (last_digit < 0)
	last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
