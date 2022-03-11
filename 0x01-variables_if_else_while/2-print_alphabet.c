#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	for(int x= 'A'; x <= 'Z'; x++)
	{
		int low_x = tolower(x);
		putchar(low_x);
	}
	return 0;

}
