#include "main.h"
#include <stdio.h>
/**
 * _puts - starts the program
 * @str : pass the character
 *returns : returns nothing
*/
void _puts(char *str)
{
	int len;

	for (len = 0; len != '\0'; len--)
	{
		_putchar(*str[len]);
	}
	_putchar('\n');
}

