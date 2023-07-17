#include <stdio.h>
#include <stdlib.h>
/**
  *main - Beginning of Program
  *Return: Returns 0 and ends program
*/
int main(void)
{
	int s = 97;
	int b = 65;

	while (s <= 122)
	{
		putchar(s);
		s++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
