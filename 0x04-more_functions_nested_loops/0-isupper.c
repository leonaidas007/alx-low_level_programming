#include "main.h"
/**
  *_isupper()- Checks for Uppercase
  *c - int to be checked
  *Return: returns 1 if in upperase, returns 0 if in lowercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
