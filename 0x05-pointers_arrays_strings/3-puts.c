#include "main.h"
#include <stdio.h>
/**
  * _puts - starts the program
  * @str : pass the character
  *returns : returns nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
