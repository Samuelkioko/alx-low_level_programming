/*
 * File: 3-print_numbers.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int x = 0;

	do {
		_putchar((x % 10) + '0');
		x++;
	} while (x <= 9);
	_putchar('\n');
}
