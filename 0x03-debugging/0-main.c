#include "main.h"
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
	else
	{
		printf("%d is negative", s);
	}
	return (0);
}
