#include <stdio.h>
/**
  *main - program begins
  *Return: returns 0
 */
int main(void)
{
	printf("size of char: %lu bytes\n", sizeof(char));
	printf("size of int: %lu bytes\n", sizeof(int));
	printf("size of long int: %lu bytes\n", sizeof(long int));
	printf("size of float: %lu bytes\n", sizeof(float));
	printf("size of double: %lu bytes\n", sizeof(double));
	printf("size of unsigned long int: %lu bytes\n", sizeof(unsigned long int));
	return (0);
}
