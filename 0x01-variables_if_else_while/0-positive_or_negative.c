#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Program begins
  *Return: returns 0. Program ends
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf("The number %d is positive\n", n);
	}else if(n=0){
		printf("The number is %d\n", n);
	}else if(n<0){
		printf("The number %d is negative\n", n);
	}
	return (0);
}
