#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * int n - This variable will store a different value every time program is ran
 * return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int myLastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	myLastDigit=n % 10; /*n modulo divided by 10 returns the last digit*/
	if(myLastDigit>5)
	{
		printf("Last digit of %d and is greater than 5\n",n);
	}
	else if(myLastDigit<6 && myLastDigit != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n",n);
	}
	else
	{
		printf("Last digit of %d and is 0\n",n);
	}
	

	return (0);
}
