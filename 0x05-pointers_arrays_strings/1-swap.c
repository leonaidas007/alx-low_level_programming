#include "main.h"
#include <stdio.h>
/**
  *swap_int - funtions swaps the value of two variables
  *@a : integer to swap
  *@b :  integer to swap
  *Returns : nothing
*/
void swap_int(int *a, int *b)
{
	int sub;

	sub = *a;
	*a = *b;
	*b = sub;
}
