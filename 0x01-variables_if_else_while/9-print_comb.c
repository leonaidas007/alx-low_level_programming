#include <stdio.h>
#include <stdlib.h>
/**
  *main - Program Begins
  *Return: returns 0 and ends the program
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
