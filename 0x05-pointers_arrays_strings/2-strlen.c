#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer of the string
 *
 * Return: lp
 */

int _strlen(char *s)
{
	int lp;

	for (lp = 0; *s != '\0'; s++)
		++lp;
	return (lp);
}
