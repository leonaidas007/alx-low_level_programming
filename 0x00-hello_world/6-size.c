#include <stdio.h>
/**
  *main - program begins
  *Return: returns 0
 */
int main(void)
{
	printf("size of a char: %lu bytes\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu bytes\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu bytes\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu bytes\n", (unsigned long)sizeof(float));
	return (0);
}
