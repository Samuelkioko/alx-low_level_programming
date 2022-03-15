/*
 * File: 7-print_last_digit.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;

	if (last_d < 0 ) /*convert to positive*/
		last_d *= -1;
	_putchar (last_d + '0');

	return (last_d);
}
