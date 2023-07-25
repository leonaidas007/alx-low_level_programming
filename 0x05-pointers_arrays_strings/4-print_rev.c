nclude "main.h"
#include <stdio.h>
/**
 * print_rev - rpogram prints strings in reverse
 * @str : pass the character
 *returns : returns nothing
*/
void print_rev(char *str)
{
	int len;

	len = _strlen(char *str);

	_putchar(*str[--len]);
	_putchar('\n');
}

