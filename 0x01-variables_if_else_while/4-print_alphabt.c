/*
 * File: 4-print_alphabet.ci
 * Auth: Samuel Kioko
 */

#include <stdio.h>
/**
 * a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
