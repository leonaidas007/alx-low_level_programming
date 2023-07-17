#include <stdio.h>
/**
  *main - program begins
  *Return: returns 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu bytes\n", sizeof(d));
	printf("size of an int: %lu bytes\n", sizeof(a));
	printf("size of a long int: %lu bytes\n", sizeof(b));
	printf("size of a long long int: %lu bytes\n", sizeof(c));
	printf("size of a float: %lu bytes\n", sizeof(f));
	return (0);
}
