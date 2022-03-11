#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	/*print lower case*/
	for(int x = 'a';x <= 'z'; x++)
	{
		putchar(x);
	}
	/*print upper case*/
	for(int y = 'A';y <= 'Z'; y++)
	{
		putchar(y);
	}
	return 0;
}
