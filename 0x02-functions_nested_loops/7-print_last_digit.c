#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @c: the int the extra digit from
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int c;
	
	if (n < 0)
	c = -1;
	
	c = n % 10;
	
	else
	c = -c;

	_putchar(c + '0');
	return (c);
}
