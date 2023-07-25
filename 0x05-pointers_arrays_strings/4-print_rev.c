#include "main.h"
#include <stdio.h>
/**
 * print_rev - rpogram prints strings in reverse
 * @str : pass the character
 *returns : returns nothing
*/
void print_rev(char *str)
{
	int i = 0;
	int o;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str--;
	for (o = i; o > 0; o--)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}

