#include <stdio.h>
#include <stdlib.h>
/**
  *main - program starts here
  *Return: returns 0 and ends the program
*/
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
