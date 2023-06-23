#include "main.h"

/**
 *_isdigit - check if a characterr is a digit
 *@i: the number to be cheked
 *
 *Return: 1 for a character that will be digit or 0 for any else
 */

int _isdigit(int i)
{
	if (i >= 0 && i <= 9)
	{
		return (1);
	}
	return (0);
}
