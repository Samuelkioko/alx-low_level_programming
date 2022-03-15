/*
 * File: 1-alphabet.c
 * Auth: Samuel Kioko
 *
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
