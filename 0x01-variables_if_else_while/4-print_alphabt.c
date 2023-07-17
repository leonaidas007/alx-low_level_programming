#include <stdio.h>
/**
  *main - Program Starts here
  *Return: returns 0 and ends the programs
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 113 || i == 101)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
