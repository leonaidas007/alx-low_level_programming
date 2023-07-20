#include "main.h"
void print_number(int n)
{
	unsigned int p;

	if (p < 0)
	{
		p = -n;
		_putchar('-');
	}
	else
	{
		p = n;
	}
	if  (p / 10)
	{
		print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
