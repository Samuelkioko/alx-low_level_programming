/*
 * File: 5-print_numbers.c
 * Auth: Samuel Kioko
 */

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	do {
		printf("%d", x);
		x++;
	} while (x < 10);

	printf("\n");
	return (0);
}

