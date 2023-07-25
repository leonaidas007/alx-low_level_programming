#include "main.h"
#include <stdio.h>
/**
 * print_rev - rpogram prints strings in reverse
 * @str : pass the character
 *returns : returns nothing
*/
void print_rev(char *str)
{
	int len;
	int i;

	while (*s != '\0')
	{
		len++;
		str++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*str);
		s--;
	}
	_putchar('\n');
}

