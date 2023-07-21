#include "main.h"
#include "../0x01-variables_if_else_while/0-positive_or_negative.c"
/**
  *main - checks if number is positive or negative
  *Return : returns 0 and ends program
*/
int main(int s)
{
	if (positive_or_negative(s) > 0)
	{
		printf("%d is positive", s);
	}
	else if (positive_or_negative(s) < 0)
	{
		printf("%d is negative", s);
	}
	return (0);
}
