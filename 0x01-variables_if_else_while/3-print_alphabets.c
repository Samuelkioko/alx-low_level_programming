/*
 * File: 2-print_alphabet.c
 * Auth: Samuel Kioko
 */

#include <stdio.h>
/**
 * a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int x,y;
	for(x = 'a';x <= 'z'; x++)
	{
		putchar(x);
	}
	for(y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return 0;
}
