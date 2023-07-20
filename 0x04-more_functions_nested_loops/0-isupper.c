#include "main.h"
/**
  *main - Begins the program
  *Return: Ends program and returns 0
*/
/*int main(void)
{
	int _isupper(int c);
	return (0);
}*/
/**
  *_isupper()- Checks for Uppercase
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
