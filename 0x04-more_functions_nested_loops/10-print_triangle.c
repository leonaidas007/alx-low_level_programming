#include "main.h"
/**
  *print_triangle - start of the program
  *size - use to check to create pattern
  *Return : returns void
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; j++)
		{
			for (j =i; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
