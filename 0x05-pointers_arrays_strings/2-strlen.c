#include "main.h"
#include <stdio.h>
/**
  * _strlen - Program begins
  * @s: character to check length
  * return: returns length of type int
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
