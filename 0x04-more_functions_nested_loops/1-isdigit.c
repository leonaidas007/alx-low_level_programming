#include <main.h>
/**
 *_isdigit - Check for digits
 *c - int to be checked
 *Returns : returns 1 or 0
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
