/*
 * File: 4-print_most_numbers.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9,
 * followed by a new line
 *
 */
void print_most_numbers(void)
{
	int x = 0;

	do {
		if (x != 2 && x != 4)
		
			_putchar((x % 10) + '0');
		x++;
	} while  (x <= 9);
	_putchar('\n');
}
