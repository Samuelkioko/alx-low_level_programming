/*
 * File: 7-print_tebahpla.c
 * Auth: Samuel Kioko
 */
#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'z';

	do {
		putchar(x);
		x--;
	} while (x >= 'a');
	putchar('\n');
	return (0);
}
