#include "main.h"

/**
  * rev_string - reverse a string
  * @s: the string parameter input
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int l, i;
	char t;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < 1 / 2 ; i++)
	{
		t = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
	}
}
