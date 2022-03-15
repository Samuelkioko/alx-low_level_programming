/*
 * File: 11-print_to_98.c
 * Auth: Samuel Kioko
 */
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @a: The number to begin counting at
 */
void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a > 98)
			printf("%d, ", a--);
		printf("%d\n", a);
	}
	else
	{
		while (a < 98)
			printf("%d, ", a++);
		printf("%d\n", a);
	}
}
